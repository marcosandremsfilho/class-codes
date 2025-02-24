pkg load control;
clear all;
close all;
clc;

a1 = [0 1; 0 -1];
b1 = [0; 1];
c1 = [1 0];


a2 = [0 1; 1 0];
b2 = [0; 1];
c2 = [2 1];


a3 = [0 1; 0 -1];
b3 = [0; 1];
c3 = [-2 1];

s1 = -4 + i*5.458;
s2 = -4 - i*5.458;

k1 = acker(a1,b1,[s1,s2])
k2 = acker(a2,b2,[s1,s2])
k3 = acker(a3,b3,[s1,s2])

f1 = -inv(c1*inv(a1-b1*k1)*b1)
f2 = -inv(c2*inv(a2-b2*k2)*b2)
f3 = -inv(c3*inv(a3-b3*k3)*b3)

t1 = ss(a1-b1*k1, b1*f1, c1);
t2 = ss(a2-b2*k2, b2*f2, c2);
t3 = ss(a3-b3*k3, b3*f3, c3);


