
L1 = 10;
L2 = 5;
//x = 5;
//y= 13.660254;

//theta2 
num2 = (x^2) + (y^2) - (L1^2) - (L2^2);
den2 = 2*L1*L2;

//positivo
theta2p = acosd(num2/den2);
//negativo
theta2n = - acosd(num2/den2);

//theta1 positivo
nume1 = y*(L1+L2*cosd(theta2p)) - x*L2*sind(theta2p);
deno1 = x*(L1+L2*cosd(theta2p)) + y*L2*sind(theta2p);

theta1p = atand(nume1/deno1);


//theta1 negativo
numer1 = y*(L1+L2*cosd(theta2n)) - x*L2*sind(theta2n);
denor1 = x*(L1+L2*cosd(theta2n)) + y*L2*sind(theta2n);

theta1n = atand(numer1/denor1);

//disp('Valor de theta1'); 
//disp(theta2p);
//disp(theta1p);
//disp('Valor de theta1');
//disp(theta2n);
//disp(theta1n);

//x e y para theta2 e theta 1 positivo
xp = L1*cosd(theta1p) + L2*cosd(theta1p + theta2p);
yp = L1*sind(theta1p) + L2*sind(theta1p + theta2p);
disp(xp);
disp(yp);
//x e y para theta2 e theta 1 negativo
xn = L1*cosd(theta1n) + L2*cosd(theta1n + theta2n);
yn = L1*sind(theta1n) + L2*sind(theta1n + theta2n);
disp(xn);
disp(yn);

//x e y para theta2 positivo e theta 1 negativo
xpn = L1*cosd(theta1n) + L2*cosd(theta1n + theta2p);
ypn = L1*sind(theta1n) + L2*sind(theta1n + theta2p);
disp(xpn);
disp(ypn);

//x e y para theta2 negativo e theta 1 positivo
xnp = L1*cosd(theta1p) + L2*cosd(theta1p + theta2n);
ynp = L1*sind(theta1p) + L2*sind(theta1p + theta2n);
disp(xnp);
disp(ynp);







