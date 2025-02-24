clear all;
close all;
clc;

% Condição inicial
xt = [ 0 10*pi/180 0 0 ];
x0 = [ 0 10*pi/180 0 0 ];

% Simulação do modelo não linear do pêndulo invertido
ts = ( 0:0.01:5 )';
xt = lsode('pendulo', xt, ts)
x0 = lsode('pendulo_0', x0, ts)

figure;
plot(ts, 100*xt(:,1));
hold on;
plot(ts, 100*x0(:,1), 'r');
grid;
xlabel('Tempo [s]');
ylabel('Posicao do carro [cm]');

figure;
plot(ts, 180/pi*xt(:,2));
hold on;
plot(ts, 180/pi*x0(:,2), 'r');
grid;
xlabel('Tempo [s]');
ylabel('Angulo do pendulo [graus]');
