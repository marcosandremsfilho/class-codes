pkg load control;
clear all;
close all;
clc;

global M m l g I f;

M = 1.00;
m = 0.30;
l = 0.25;
g = 9.81;

I = m*(2*l)^2/12;

as = [ 0 0 1 0; 0 0 0 1; 0 g*(m*l)^2/(I*(M+m)+M*m*l^2) 0 0; 0 g*m*l*(M+m)/(I*(M+m)+M*m*l^2) 0 0 ];
bs = [ 0; 0; (I+m*l^2)/(I*(M+m)+M*m*l^2); m*l/(I*(M+m)+M*m*l^2) ];
cs = [ 1 0 0 0 ];

gs = ss(as, bs, cs);
tf(gs)

s1 = -2+i*2.7288;
s2 = -2-i*2.7288;
s3 = -5.4249;
s4 = -5.4249;

ks = acker(as, bs, [s1 s2 s3 s4])
fs = - inv(cs*inv(as-bs*ks)*bs)

% Condicao inicial
rs = 0;
x0 = - 20/180*pi;

% Simulacao linear com a retroacao de estados
ti = 0.001;
xs = [ 0 x0 0 0; 0 x0 0 0 ];

for i = 1:12001
  if i == 6001
    rs = 1;
  end
  f = fs*rs - ks(1)*xs(2,1) - ks(2)*xs(2,2) - ks(3)*xs(2,3) - ks(4)*xs(2,4);
  xs = lsode('linear', xs(2,:), [0 ti]);
  ts(i) = (i-1)*ti;
  us(i) = f;
  y1(i) = xs(2,1);
  y2(i) = xs(2,2);
end

figure;
plot(ts, us);
grid;
xlabel('Tempo [s]');
ylabel('Forca [N]');

figure;
plot(ts, 100*y1);
grid;
xlabel('Tempo [s]');
ylabel('Posicao do carro [cm]');

figure;
plot(ts, 180/pi*y2);
grid;
xlabel('Tempo [s]');
ylabel('Angulo do pendulo [graus]');
