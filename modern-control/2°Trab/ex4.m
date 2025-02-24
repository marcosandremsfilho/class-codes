pkg load control;
clear all;
close all;
clc;

Gc = tf(10, [1 1 100]);

%Parâmetros do sistema
global k = 10; %N/m
global m = 0.1; %Kg
global b = 0.1; %N.s/m
global g = 9.81; %m/s²

%Espaço de estados do sitema massa-mola
A = [0 1; -k/m -b/m]
B = [0; 1/m]
C = [1 0]
D = [0]

%Polos do sistema
s1 = -2
s2 = -5

%Polo arbitrario da expansão
s3 = -8

%Expamsão de estados
A_e = [A zeros(2,1); -C 0]
B_e = [B; 0]
C_e = [C 0]

%Ganhos de retroação e ganho do integrador
k_o = acker(A_e, B_e, [s1 s2 s3])
k = k_o(1,1:2)
j = -k_o(1,3)

%Observador de estados
L = acker(A', C', [s1 s2])'

A_o = [A-B*k B*j B*k; -C zeros(1, 3); zeros(2, 3) A-L*C]
B_o = [ zeros(2, 1) ; 20 ; zeros(2,1)]
C_o = [C zeros(1,3)]

%Expansão de polos com expansão de polos
t1 = ss(A_o, B_o, C_o) #Criando o espaço de estados do observador com expansão

x_ref = 2;
y_max_ref =  21;
y_min_ref = 19;
figure;
step(t1, 'b'); #Plota o grafico com a função degrau
hold on
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);

ylim([0 22]);
xlim([0 3]);
xlabel('Time (s)');
ylabel('Referencia do tipo degrau');
