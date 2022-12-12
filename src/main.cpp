#include <Arduino.h>

const int pin_pir = 18; // broche du capteur PIR
int state_pir = 0; // etat de la sortie du capteur
 
void setup()
{
  Serial.begin(9600);
  pinMode(pin_pir, INPUT); //la broche du capteur est mise en entree
}
 
void loop()
{
  state_pir = digitalRead(pin_pir);//lecture du capteur
  if (state_pir == HIGH) //si quelquechose est detecte
  {
    Serial.println("HIGH");
  }
  else //sinon
  {
    Serial.println("LOW");
  }
}