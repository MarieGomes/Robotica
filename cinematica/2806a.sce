
L1 = 10;
L2 = 5;
L3 = 10;
x3 = 15;
y3 = 19;
phi = 60;

x = x3 - L3*cosd(phi);
y = y3 - L3*sind(phi);

disp(x);
disp(y);

num = x^2 + y^2 - L1^2 - L2^2
den = 2*L1*L2

theta2a = acosd(num/den);
theta2b = -theta2a

disp(theta2a);
disp(theta2b);

a1 = y/x;
a2 = (sqrt(y^2 + x^2 - (L1+L2*cosd(theta2a))^2))/(L1+L2*cosd(theta2a));

theta1a = atand(a1) + atand(a2);
theta1b = atand(a1) - atand(a2);

disp(a2,a1);
disp(theta1a);
disp(theta1b);

//h = [teta D A alpha],'J'
L(1) = Link ([0 0 L1 0],'r'); //DH Elo 1
L(2) = Link ([0 0 L2 0],'r'); //DH Elo 2
L(3) = Link ([0 0 L3 0],'r'); //DH Elo 2

robocili = SerialLink (L,'name','robinho');

//PlotRobot(robocili,[0,0,0]); //entrada dos parametros

//PlotRobotFrame(robocili,[0,0,0],'hold'); //entrada dos parametros

q1 = pi*theta1b/180*(0:0.01:1)';    //junta1 rotacional
q2 = pi*theta2b/180*(0:0.01:1)';    //junta2 rotaciona2
q3 = pi*phi/180*(0:0.01:1)';    //junta2 rotaciona3

AnimateRobot(robocili,[q1,q2,q3]);

x3 = L1*cosd(theta1a) + L2*cosd(theta2a) + L3*cosd(phi);
y3 = L1*sind(theta1a) + L2*sind(theta2a) + L3*sind(phi);
disp(x3);
disp(y3);
