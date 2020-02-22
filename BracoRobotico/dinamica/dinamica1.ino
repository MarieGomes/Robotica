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
  //for

  for (int x=0;x<=90;x++){
    serv1.write(x);   //Base rotaciona de 0º a 90º.
    delay(50);   

  }

}
