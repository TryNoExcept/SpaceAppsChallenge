#include<Servo.h> //Usando a biblioteca do servo para controlar ESC

Servo control; // Classe do Servo

void setup()
{
  control.attach(8) //Specificando o pino do ESC
  control.writeMicroseconds(1000); //Inicializando o sinal em 1000
  Serial.begin(9600);
}

void loop()
{
  int val; //Variável que irá alterar o valor do pontenciometro
  val= analogRead(A0);
  val= map(val,0,1023,1000,2000); 
  control.writeMicroseconds(val);
}
