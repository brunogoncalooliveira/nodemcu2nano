#include<SoftwareSerial.h>
SoftwareSerial s(3,1);

void setup() {
  s.begin(9600);
}

void loop() {
  //Write '123' to Serial
  s.write(1);
  delay(1000);
  s.write(0);
  delay(1000);
}
