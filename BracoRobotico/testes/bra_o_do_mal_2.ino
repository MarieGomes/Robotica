// inclui bibilioteca do servomotor
#include <Servo.h>

// nomeia os servos
Servo serv1, serv2,serv3,serv4;

// define pinos dos servos
#define pinServ1 2
#define pinServ2 3
#define pinServ3 4
#define pinServ4 5
#define  x
void setup() {
  // inicia o monitor serial:
  Serial.begin(9600);

  // atribui pinos dos servos
  serv1.attach(pinServ1);
  serv2.attach(pinServ2);
  serv3.attach(pinServ3);
  serv4.attach(pinServ4);

}

void loop() {

/*
for(int i = 0; i<=90; i+=1){
  serv1.write(i);
  delay(50);
}

for (int i= 90; i<= 180; i+=1){
  serv2.write(i+5);
  serv3.write(i+10);
  delay(50);
}

for(int j=180; j>=60; j -=1){
  serv2.write(j-5);
  serv3.write(j-10);
  delay(50);
    
}

for(int i = 90; i>=0; i-=1){
  serv1.write(i);
  delay(50);
}

*/

// Posição Inicial

serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);
serv2.write(39); // braço esquerdo ( sem o osso)
delay(100);
serv3.write(31); // braço direito (com osso)
delay(100);
serv4.write(106); // garra
delay(100);


delay (200);




// PMIA 1
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(60); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(10); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
delay(300);


delay (200);

// PMIA 2
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(100); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(11); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
delay(300);


delay (200);


// Posição Intermediária 1
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(140); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(7); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
delay(300);


// PMIA 3
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(130); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(90); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
delay(300);


delay (200);

//Posição Intermediária 2
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(120); // braço direito (com osso)  
delay(250);
serv2.write(100); // braço esquerdo ( sem o osso)
delay(250);
serv4.write(140); // garra
delay(1500);


// PMIA 4
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

serv3.write(130); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(150); //braço direito (com osso)
delay(250); 
serv4.write(140); // garra
delay(300);


delay (200);

// PMIA 5

serv3.write(150); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(160); //braço direito (com osso)
delay(250); 
serv4.write(140); // garra
delay(300);
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);


delay (200);


//Posição Final
serv3.write(165); // braço direito (com osso)  
delay(250);
serv2.write(176); // braço esquerdo ( sem o osso)
delay(250);
serv4.write(136); // garra 
serv1.write(0); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);


// Para o movimento suave na pegada da garra
serv4.write(132);
delay(200);
serv4.write(120);
delay(200);
serv4.write(115);
delay(200);
serv4.write(108);
delay(200);
serv4.write(107);
delay(700);

// Voltando1
serv3.write(150); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(160); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(175); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);

//Voltando2

serv3.write(130); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(150); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(60); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);


//Voltando3

serv3.write(120); // braço direito (com osso)  
delay(250);
serv2.write(100); // braço esquerdo ( sem o osso)
delay(250);
serv4.write(107); // garra
serv1.write(90); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);

//Voltando4

serv3.write(130); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(90); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(120); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);

//Voltando5

serv3.write(140); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(7); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(150); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);

//Voltando6

serv3.write(100); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(11); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(160); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);


delay (200);

//Voltando7

serv3.write(60); //braço esquerdo ( sem o osso)
delay(250); 
serv2.write(10); //braço direito (com osso)
delay(250); 
serv4.write(107); // garra
serv1.write(165); // braço esquerdo ( sem o osso)
delay(100);

delay(1500);


delay (200);

//Voltando8
serv2.write(39); // braço esquerdo ( sem o osso)
delay(100);
serv3.write(31); // braço direito (com osso)
delay(100);
serv4.write(106); // garra
serv1.write(175); // braço esquerdo ( sem o osso)
delay(100);

delay (1500);





delay (1500);



}
