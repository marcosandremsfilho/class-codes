function [xpto] = naolinear(x, t) 

  global M m l g I f; 

  xpto(1) = x(3); 
  xpto(2) = x(4); 
  xpto(3) = + (I+m*l^2)*f + g*(m*l)^2*sin(x(2))*cos(x(2)) + (I+m*l^2)*m*l*x(4)^2*sin(x(2)); 
  xpto(4) = - m*l*cos(x(2))*f - g*(M+m)*m*l*sin(x(2)) - (m*l)^2*x(4)^2*sin(x(2))*cos(x(2)); 

  xpto(3) = xpto(3) / ( (M+m)*(I+m*l^2) - (m*l)^2*cos(x(2))^2 ); 
  xpto(4) = xpto(4) / ( (M+m)*(I+m*l^2) - (m*l)^2*cos(x(2))^2 ); 

endfunction 
