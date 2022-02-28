#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>

SoftwareSerial NodeMCU(D2,D3);

int i = 1011;
void setup(){
  Serial.begin(9600);
  NodeMCU.begin(4800);
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);

}

void loop()
{
   
  NodeMCU.print(i); 
  NodeMCU.println("\n");  
  i++; 
      delay(500);
}
