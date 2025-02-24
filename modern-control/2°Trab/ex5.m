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
As = [0 1; -k/m -b/m]
Bs = [0; 1/m]
Cs = [1 0]
Ds = [0]

I = [1 0; 0 1]

#Espaço de estados em tempo discreto
T_a = 0.1 #Tempo de amostragem

gs = ss(As, Bs, Cs)
gz = c2d(gs, T_a)

[Az, Bz, Cz, Dz, Tz] = ssdata(gz);

%Polos do sistema
s1 = -2
s2 = -5
%Polo arbitrario da expansão
s3 = -8

%Discretizando os polos do sistema
z1 = exp(s1*T_a)
z2 = exp(s2*T_a)
z3 = exp(s3*T_a)

%Expansão de estados discretizados
A_e = [Az zeros(2,1); -Cz 1]
B_e = [Bz; 0]
C_e = [Cz 0]

%Ganhos de retroação e ganho do integrador
k_o = acker(A_e, B_e, [z1 z2 z3])
k = k_o(1,1:2)
j = -k_o(1,3)

%Observador de estados
L = acker(Az', Cz', [z1 z2])'

A_o = [Az-Bz*k Bz*j Bz*k; -Cz 1 1 1; zeros(2, 3) (I - L*Cz)*Az]
#B_o = [0; 0; 20; 0; 0] %Pelo método de Euler explícito
B_o = [Bz*j; 20; 0; 0] %Pelo método de Euler implícito
C_o = [Cz zeros(1,3)]

%Expansão de polos com expansão de polos
t1 = ss(A_o, B_o, C_o, 0, T_a) #Criando o espaço de estados do observador com expansão

x_ref = 2;
y_max_ref =  21;
y_min_ref = 19;
figure;
step(t1, 'b'); #Plota o grafico com a função degrau em tempo discreto
hold on
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);

ylim([0 22]);
xlim([0 3]);
xlabel('Time (s)');
ylabel('Referencia do tipo degrau');
