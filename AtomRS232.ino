#include <M5Atom.h>

void setup() {
 M5.begin();
 Serial2.begin(9600, SERIAL_8N1, 22, 19);
 Serial.begin(115200);
}

void loop() {
 if(Serial2.available()){
  int coms = Serial2.read();
  Serial.write(coms);
 }
 if(Serial.available()){
  Serial2.write(Serial.read());
 }
}
