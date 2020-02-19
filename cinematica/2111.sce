t01 = [cosd(60) -sind(60) 0 10*cosd(60);
       sind(60)  cosd(60) 0 10*sind(60);
       0            0     1       0;
       0            0     0       1
 
];

t12 = [cosd(30)  -sind(30)  0  5*cosd(30);
       sind(30)   cosd(30)  0  5*sind(30);
          0           0     1       0;
          0           0     0       1
];

t02 = t01*t12;

disp(t02);
