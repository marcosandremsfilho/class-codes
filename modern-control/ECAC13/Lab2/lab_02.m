pkg load control;
clear all;
close all;
clc;

% Condicao inicial

  M = 1.00; % [kg]
  m = 0.30; % [kg] massa haste
  l = 0.25; % [m]
  g = 9.81; % [m/s2]

  I = m*(2*l)^2/12;

% Fatores da eq. de estado

  a32 = g*(m*l)^2 / ((M+m)*I+M*m*l^2);
  a42 = g*(M+m)*m*l / ((M+m)*I+M*m*l^2);
  b3 =  (I+m*l^2) / ((M+m)*I+M*m*l^2);
  b4 = (m*l) / ((M+m)*I+M*m*l^2);

  A = [ 0 0 1 0 ; 0 0 0 1; 0 a32 0 0; 0 a42 0 0 ];
  B = [ 0; 0; b3; b4 ];
  CP = [ 1 0 0 0 ]; % Saida p(t_
  CT = [ 0 1 0 0 ]; % Saida teta(t)

  ssp = ss( A, B, CP)
  sst = ss( A, B, CT)

  % mc = ctrb(A, B) matriz controlabilidade
  % mop = obsv(A, CP) matriz observabilidade em p(t)
  % mot = obsv(A, CT) matriz observabilidade em teta(t)
  % eig(A) auto-valores da matriz de A
  % tf() returns the tf function
