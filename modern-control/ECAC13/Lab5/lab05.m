pkg load control;
clear all;
close all;
clc;

ta = 1;

a1 = [.9048 0; .0905 .9048];
b1 = [.09517; .0047];
c1 = [1 0];


a2 = [0 1; 1 0];
b2 = [0; 1];
c2 = [2 1];


a3 = [0 1; 0 -1];
b3 = [0; 1];
c3 = [-2 1];

s1 = 0.8146 + i*0.0817;
s2 = 0.8146 - i*0.0817;

s1=s1/10;
s2=s2/10;

k1 = acker(a1,b1,[s1,s2])
k2 = acker(a2,b2,[s1,s2])
k3 = acker(a3,b3,[s1,s2])

f1 = -inv(c1*inv(a1-b1*k1)*b1)
f2 = -inv(c2*inv(a2-b2*k2)*b2)
f3 = -inv(c3*inv(a3-b3*k3)*b3)

t1 = ss(a1-b1*k1, b1*f1, c1);
t2 = ss(a2-b2*k2, b2*f2, c2);
t3 = ss(a3-b3*k3, b3*f3, c3);

##figure;
##bode(t1);
##figure;
##bode(t2);
##figure;
##bode(t3);

t1z = c2d(t1, ta);
t2z = c2d(t2, ta);
t3z = c2d(t3, ta);

figure;
step(t1, 30);
hold on;
step(t1z, 30, 'r');

figure;
step(t2, 30);
hold on;
step(t2z, 30, 'r');

figure;
step(t3, 30);
hold on;
step(t3z, 30, 'r');
