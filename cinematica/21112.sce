L1 = 10;
L2 = 5;
px = 5;
py = 13.66;

//teta2 positivo

teta2p = acosd((px^2 + py^2 - L1^2 - L2^2)/(2*L1*L2));

teta1p = atand(py/px) + atand(sqrt(py^2 + px^2 - (L1+ L2*cosd(teta2p))^2)/(L1 + L2*cosd(teta2p)));
teta1n = atand(py/px) - atand(sqrt(py^2 + px^2 - (L1+ L2*cosd(teta2p))^2)/(L1 + L2*cosd(teta2p)));

//teta2 negativo

teta2n = - acosd((px^2 + py^2 - L1^2 - L2^2)/(2*L1*L2));
teta1pp = atand(py/px) + atand(sqrt(py^2 + px^2 - (L1+ L2*cosd(teta2n))^2)/(L1 + L2*cosd(teta2n)));
teta1nn = atand(py/px) - atand(sqrt(py^2 + px^2 - (L1+ L2*cosd(teta2n))^2)/(L1 + L2*cosd(teta2n)));

disp("Teta 2 positivo");
disp(teta2p);
disp(teta1p);
disp(teta1n);

disp("Teta 2 negativo");
disp(teta2n);
disp(teta1pp);
disp(teta1nn);
