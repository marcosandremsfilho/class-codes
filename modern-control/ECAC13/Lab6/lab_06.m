pkg load control;
clear all;
close all;
clc;

ta = 1;

as = [0 1; 0 -1];
bs = [0; 1];
cs = [1 0];

gs = ss(as, bs, cs);
gz = c2d(gs, ta)

[az, bz, cz, dz, tz] = ssdata(gz);

s1 = -4 + i*5.458;
s2 = -4 - i*5.458;

z1 = exp(s1*ta);
z2 = exp(s2*ta);

ks = acker(as,bs,[s1,s2]);
fs = -inv(cs*inv(as-bs*ks)*bs);
kz = acker(az,bz,[z1,z2]);
fz = -inv(cz*inv(az-bz*kz-eye(2))*bz);

ys = ss(as-bs*ks, bs*fs, cs);
us = ss(as-bs*ks, bs*fs, -ks, fs);
yz = ss(az-bz*kz, bz*fz, cz, 0, ta);
uz = ss(az-bz*kz, bz*fz, -kz, fz, ta);

figure;
subplot(2, 1, 1);
step(ys);
hold on;
step(yz, 'r');
ylabel('Saida');
subplot(2, 1, 2);
step(us);
hold on;
step(uz, 'r');
ylabel('Entrada');
