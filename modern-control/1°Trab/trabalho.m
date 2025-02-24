pkg load control;
clear all;
close all;
clc;
graphics_toolkit('gnuplot')

global d = 0.03;
global mL = 0.36;
global g = 9.8;
global J = 0.0106;
global c = 0.0076;
global Km = 0.0296;
global V = 40;

A = [0 1; -d*mL*g/J -c/J];
B = [0; Km/J];
C = [1 0]
D = [0]

s = tf('s');
I = [1 0; 0 1]
s1 = -0.8 + 0.6i;
s2 = -0.8 - 0.6i;
s3 = -1

A_a = [0 1 0; -9.9849 -0.717 0; -1 0 0];
B_b = [0; 2.7924; 0];
C_c = [1 0 0];

k = acker(A_a, B_b, [s1 s2 s3])
L = acker(A', C', 1000000000000000000000000000000000000000*[s1 s2])

k1 = k(1, 1:2)
j = -k(1, 3)
J = j/s
Ltrans = L'

Gs = C*inv(s*I-A)*B
Cs = k1*inv(s*I-A+B*k1+Ltrans*C)*Ltrans

sistema = feedback(series(Gs, J), Cs, +1);

t = 0:0.01:10;        % vetor de tempo de 0 a 10 segundos, com passo de 0.01 segundos
r = 10*ones(size(t));    % sinal de referência unitário
[y, ~] = lsim(sistema, r, t);  % simulação da resposta do sistema

plot(t, r, 'b-', t, y, 'r-')
xlabel('Tempo (s)')
ylabel('Amplitude')
legend('Referência', 'Saída do sistema')
####
####step(sys);
####hold on
####
####sys_closed = ss([A-B*k1 B*j; -C 0 ], [0; 0; 1], [C 0]);
####sys_closed_test = ss(A_a, B_b, C_c);

#t = 0:0.01:20;
#u = V*ones(size(t));
#x0 = [0; 0; 0];

#[y, t, x] = lsim(sys_closed, u, t, x0);

#plot(t, y(:,1));
#hold on
#xlabel('Tima (s)')
#ylabel('Angle (rad)')
#title('With feed foward and without-feed-foward Step Responses')
#legend('with feedfoward', 'without feedfoward')
