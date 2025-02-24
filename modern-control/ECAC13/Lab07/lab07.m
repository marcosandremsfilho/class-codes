pkg load control;
clear all;
close all;
clc;

% Retroação de estados com expansão de polos (continuo(s) / discreto(z))

ta = 0.1; % declaração da função de transferência

as = [ -1 0; 1 -1];
bs = [1;0];
cs = [1 0];

gs = ss(as, bs, cs);
gz = c2d(gs, ta)

[az, bz, cz, dz, tz] = ssdata(gz);

aes = [as zeros(2,1); -cs 0];
bes = [bs;0];

aez = [az zeros(2,1); -cz 1];
bez = [bz;0];

s1 = -2+i;
s2 = -2-i;
s3 = -2;

z1 = exp(s1*ta);
z2 = exp(s2*ta);
z3 = exp(s3*ta);

kes = acker(aes, bes, [s1 s2 s3])
ks = kes(1,1:2);
js = -kes(1,3);

kez = acker(aez, bez, [z1 z2 z3])
kz = kez(1,1:2);
jz = -kez(1,3);

ys = ss([as-bs*ks bs*js; -cs 0], [0;0;1], [cs 0]) #Contínuo
us = ss([as-bs*ks bs*js; -cs 0], [0;0;1], [-ks js])

yp = ss([az-bz*kz bz*jz; -cz 1], [0;0;1], [cz 0], 0 , ta) #preditivo
up = ss([az-bz*kz bz*jz; -cz 1], [0;0;1], [-kz jz], 0, ta)

yc = ss([az-bz*kz bz*jz; -cz 1], [bz*jz;1], [cz 0], 0 , ta) %Corrente
uc = ss([az-bz*kz bz*jz; -cz 1], [bz*jz;1], [-kz jz], jz, ta)

figure;
subplot(2, 1, 1);
step(ys, 2);
hold on;
step(yc, 2, 'r');
ylabel('Saida');
subplot(2, 1, 2);
step(us, 2);
hold on;
step(uc, 2, 'r');
ylabel('Entrada');

