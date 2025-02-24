d = 0.03;
mL = 0.36;
g = 9.8;
J = 0.0106;
c = 0.0076;
Km = 0.0296;

A = [0 1; -d*mL*g/J -c/J];
B = [0; Km/J];
C = [1 0];
D = [0];

p = [-0.8 + 0.6i, -0.8 - 0.6i];
K = place(A, B, p);

F = inv(B/(A-B*K)*B)*((A-B*K)\[0; g]);

A_ff = [A-B*K, -B*F; C, 0];
B_ff = [0; 0; 1];
C_ff = [C, 0];
D_ff = 0;

sys_ff = ss(A_ff, B_ff, C_ff, D_ff);

t = 0:0.01:20;
u = 2.5*ones(size(t));
x0 = [0; 0; 0];
[y, t, x] = lsim(sys_ff, u, t, x0);

plot(t, y)
xlabel('Tempo (s)')
ylabel('Ângulo (rad)')
title('Resposta ao degrau com retroação de estados e feedforward')

