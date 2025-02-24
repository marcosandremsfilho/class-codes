pkg load control;
clear all;
close all;
clc;

% Retroação de estados com expansão de polos

t0 = tf(45.79, [1 8 45.79]) % declaração da função de transferência

a1 = [0 1; 0 -1];
b1 = [0;1];
c1 = [1 0];

a2 = [ 0 1; 1 0];
b2 = [0;1];
c2 = [2 1];

a3 = [0 1; 0 -1];
b3 = [0;1];
c3 = [-2 1];

% Expansão de polos de G1

ae1 = [a1 zeros(2,1); -c1 0]
be1 = [b1;0];

s1 = -4+i*5.458;
s2 = -4-i*5.458;
s3 = -40;

ke1 = acker(ae1, be1, [s1 s2 s3])
k1 = ke1(1,1:2);
j1 = -ke1(1,3);

t1 = ss([a1-b1*k1 b1*j1; -c1 0], [0;0;1], [c1 0])

figure;
step(t0, 'r--');
hold on;
step(t1);

% Expansão de polos de G2

ae2 = [a2 zeros(2,1); -c2 0];
be2 = [b2;0];

s21 = -4+i*5.458;
s22 = -4-i*5.458;
s23 = -2;

ke2 = acker(ae2, be2, [s21 s22 s23])
k2 = ke2(1,1:2);
j2 = -ke2(1,3);

t2 = ss([a2-b2*k2 b2*j2; -c2 0], [0;0;1], [c2 0])

figure;
step(t0, 'r--');
hold on;
step(t2);

% Expansão de polos de G3

ae3 = [a3 zeros(2,1); -c3 0];
be3 = [b3;0];

s31 = -4+i*5.458;
s32 = -4-i*5.458;
s33 = 2;

ke3 = acker(ae3, be3, [s31 s32 s33])
k3 = ke3(1,1:2);
j3 = -ke3(1,3);

t3 = ss([a3-b3*k3 b3*j3; -c3 0], [0;0;1], [c3 0])

figure;
step(t0, 'r--');
hold on;
step(t3);
