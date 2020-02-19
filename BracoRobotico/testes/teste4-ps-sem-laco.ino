// inclui bibilioteca do servomotor
#include <Servo.h>

// nomeia os servos
Servo serv1,serv2,serv3,serv4;

// define pinos dos servos
#define pinServ1 2
#define pinServ2 3
#define pinServ3 4
#define pinServ4 5
#define posicao
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
  
 

  
// posição 1

  serv1.write(60); // base
  delay (100);
  serv2.write(57); // braço esquerdo ( sem o osso)
  delay (100);
  serv3.write(60); // braço direito (com osso)
  delay (100);
  serv4.write(102); // garra
  delay (100);


delay (200);
// posição 3
  serv1.write(60); // base
    delay (100); 
  serv3.write(67); //
  delay (100); 
  serv2.write(68); //
  delay (100); 
  serv4.write(102); // garra

delay (200);

  serv1.write(60); // base
   serv3.write(120); // braço direito (com osso)  
  delay (100);
 serv2.write(89); // braço esquerdo ( sem o osso)
  delay (100);
  serv4.write(102); // garra

  delay(200);

  // Para o movimento suave na pegada

    serv1.write(60); // base
   serv3.write(149); // braço direito (com osso)  
  delay (100);
 serv2.write(112); // braço esquerdo ( sem o osso)
  delay (100);
  serv4.write(102); // garra

 
  delay (200);
  
  serv1.write(60); // base
   serv3.write(180); // braço direito (com osso)  
  delay (100);
 serv2.write(127); // braço esquerdo ( sem o osso)
  delay (100);
  serv4.write(102); // garra

  delay(200);


serv4.write(132);

}
