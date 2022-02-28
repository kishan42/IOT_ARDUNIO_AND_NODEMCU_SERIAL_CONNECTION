#include <SoftwareSerial.h>
SoftwareSerial ArduinoUno(3,2);
int val;

void setup(){
  
  Serial.begin(9600);
  ArduinoUno.begin(4800);
 

}

void loop(){
  
  while(ArduinoUno.available()>0){
   val = ArduinoUno.parseInt();
  if(ArduinoUno.read()== '\n'){
   int val1 = val%10;
   int val2 = val/10;
  Serial.println(val1);
  Serial.println(val2);
  }
  
}

delay(500);
}
