function [xpto] = pendulo(x, t) 

  M = 1.00; % [kg] 
  m = 0.30; % [kg] 
  l = 0.25; % [m] 
  g = 9.81; % [m/s2] 

  I = m*(2*l)^2/12; 

  xpto(1) = x(3); 
  xpto(2) = x(4); 
  xpto(3) = g*(m*l)^2*sin(x(2))*cos(x(2)) + (I+m*l^2)*m*l*x(4)^2*sin(x(2)); 
  xpto(4) = - g*(M+m)*m*l*sin(x(2)) - (m*l)^2*x(4)^2*sin(x(2))*cos(x(2)); 

  xpto(3) = xpto(3) / ( (M+m)*(I+m*l^2) - (m*l)^2*cos(x(2))^2 ); 
  xpto(4) = xpto(4) / ( (M+m)*(I+m*l^2) - (m*l)^2*cos(x(2))^2 ); 

endfunction 
