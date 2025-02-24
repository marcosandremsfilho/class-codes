pkg load control;
clear all;
close all;
clc;

global M m l g I f;

% Taxa de amostragem
ta = 0.05;

M = 1.00;
m = 0.30;
l = 0.25;
g = 9.81;

I = m*(2*l)^2/12;

as = [ 0 0 1 0; 0 0 0 1; 0 g*(m*l)^2/(I*(M+m)+M*m*l^2) 0 0; 0 g*m*l*(M+m)/(I*(M+m)+M*m*l^2) 0 0 ];
bs = [ 0; 0; (I+m*l^2)/(I*(M+m)+M*m*l^2); m*l/(I*(M+m)+M*m*l^2) ];
cs = [ 1 0 0 0 ];

gs = ss(as, bs, cs);

s1 = -2+i*2.7288;
s2 = -2-i*2.7288;
s3 = -5.4249;
s4 = -5.4249;

gz = c2d(gs, ta);
[az, bz, cz, dz, tz] = ssdata(gz);

z1 = exp(s1*ta);
z2 = exp(s2*ta);
z3 = exp(s3*ta);
z4 = exp(s4*ta);

kz = acker(az, bz, [z1 z2 z3 z4])
fz = -inv(cz*inv(az-bz*kz-eye(4))*bz)

% Condicao inicial
rz = 0;
x0 = - 20/180*pi;

% Simulacao linear com a retroacao de estados
ti = 0.001;
xz = [ 0 x0 0 0; 0 x0 0 0 ];

for i = 1:12001
  if i == 6001
    rz = 1;
  end
  if rem((i-1)*ti, ta) == 0
    f = fz*rz - kz(1)*xz(2,1) - kz(2)*xz(2,2) - kz(3)*xz(2,3) - kz(4)*xz(2,4);
  end
  xz = lsode('linear', xz(2,:), [0 ti]);
  tz(i) = (i-1)*ti;
  uz(i) = f;
  y1(i) = xz(2,1);
  y2(i) = xz(2,2);
end

figure;
plot(tz, uz);
grid;
xlabel('Tempo [s]');
ylabel('Forca [N]');

figure;
plot(tz, 100*y1);
grid;
xlabel('Tempo [s]');
ylabel('Posicao do carro [cm]');

figure;
plot(tz, 180/pi*y2);
grid;
xlabel('Tempo [s]');
ylabel('Angulo do pendulo [graus]');
