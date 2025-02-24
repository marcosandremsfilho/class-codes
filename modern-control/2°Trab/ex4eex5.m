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

%Polos do sistema
s1 = -2
s2 = -55

%Polo arbitrario da expansão
s3 = -45

#####################################################################################################
#                                  Operações em tempo discreto                                      #
#####################################################################################################
#Espaço de estados em tempo discreto
T_a = 0.1 #Tempo de amostragem

gs = ss(As, Bs, Cs)
gz = c2d(gs, T_a)

[Az, Bz, Cz, Dz, Tz] = ssdata(gz);

%Discretizando os polos do sistema
z1 = exp(s1*T_a)
z2 = exp(s2*T_a)
z3 = exp(s3*T_a)

%Expansão de estados discretizados
A_e_d = [Az zeros(2,1); -Cz 1]
B_e_d = [Bz; 0]
C_e_d = [Cz 0]

%Ganhos de retroação e ganho do integrador discretizados
k_o_d = acker(A_e_d, B_e_d, [z1 z2 z3])
k_d = k_o_d(1,1:2)
j_d = -k_o_d(1,3)

%Observador de estados
##z1 = exp(s1*T_a/10)
##z2 = exp(s2*T_a/10)
#partir as condiçoes iniciais dos sistemas diferentes.
#função initial
Lz = acker(Az', (Cz*Az)', [z1 z2])'

A_o_d_c = [Az-Bz*k_d Bz*j_d Bz*k_d; -Cz 1 0 0; zeros(2, 3) (eye(2) - Lz*Cz)*Az] %A do ponto de vista do erro de estimação corrente

B_o_d_e = [0; 0; 1; 0; 0]*20 %Pelo método de Euler explícito
B_o_d_i = [Bz*j_d; 1; 0; 0]*20 %Pelo método de Euler implícito

C_o_d = [Cz zeros(1,3)]

%Expansão de polos com expansão de polos
Gz_c_e = ss(A_o_d_c, B_o_d_e, C_o_d, 0, T_a)
Gz_c_i = ss(A_o_d_c, B_o_d_i, C_o_d, 0, T_a) #Gz corrente

figure;
subplot(2,1,1)
x_ref = 2;
y_max_ref =  -1.05;
y_min_ref = 0.95;
[y,t,x] = initial(Gz_c_e, [0, 0, 0, 1,3]);
plot(t,x)
hold on;
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);
title('Método corrente com erro explicito')

subplot(2,1,2)
x_ref = 2;
y_max_ref =  -1.05;
y_min_ref = 0.95;
[y,t,x] = initial(Gz_c_i, [0, 0, 0,20,30]);
plot(t,x)
hold on;
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);
title('Método corrente com erro explicito')
#####################################################################################################
#                                  Operações em tempo contínuo                                      #
#####################################################################################################
%Expansão de estados
A_e = [As zeros(2,1); -Cs 0]
B_e = [Bs; 0]
C_e = [Cs 0]

%Ganhos de retroação e ganho do integrador em tempo contínuo
k_o = acker(A_e, B_e, [s1 s2 s3])
k = k_o(1,1:2)
j = -k_o(1,3)

%Observador de estados
L = acker(As', Cs', [s1 s2])'

A_o = [As-Bs*k Bs*j Bs*k; -Cs zeros(1, 3); zeros(2, 3) As-L*Cs]
B_o = [ zeros(2, 1) ; 1 ; zeros(2,1)]*20
C_o = [Cs zeros(1,3)]

%Expansão de polos com expansão de polos
Gs = ss(A_o, B_o, C_o) #Criando o espaço de estados do observador com expansão

#####################################################################################################
#                         Plotagem dos gráficos corrente implicito                                  #
#####################################################################################################

x_ref = 2;
y_max_ref =  20.4;
y_min_ref = 19.6;
figure;
step(Gs, 'b'); #Plota o grafico com a função degrau
hold on;
step(Gz_c_i, 'r');
hold on;
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);

ylim([0 22]);
xlim([0 3]);
xlabel('Time (s)');
ylabel('Referencia do tipo degrau');
title('Resposta em degrau tempo contínuo comparada com erro corrente e euler implicito');

#####################################################################################################
#                            Plotagem dos gráficos corrente explicito                               #
#####################################################################################################

x_ref = 2;
y_max_ref =  20.4;
y_min_ref = 19.6;
figure;
step(Gs, 'b'); #Plota o grafico com a função degrau
hold on;
step(Gz_c_e, 'r');
hold on;
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);

ylim([0 22]);
xlim([0 3]);
xlabel('Time (s)');
ylabel('Referencia do tipo degrau');
title('Resposta em degrau tempo contínuo comparada com erro preditivo e euler explicito');

#####################################################################################################
#                                Plotagem dos gráficos juntos                                       #
#####################################################################################################

x_ref = 2;
y_max_ref =  20.4;
y_min_ref = 19.6;
figure;
step(Gz_c_i, 'r');
hold on;
step(Gz_c_e, 'b');
hold on;
step(Gs, 'g');
hold on;
plot([x_ref,x_ref],[0,22]);
plot([0,5],[y_max_ref,y_max_ref]);
plot([0,5],[y_min_ref,y_min_ref]);

ylim([0 22]);
xlim([0 3]);
xlabel('Time (s)');
ylabel('Referencia do tipo degrau');
title('Comparação de todas as respostas');