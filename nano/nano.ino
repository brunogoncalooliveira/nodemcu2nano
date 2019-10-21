int recievedChar;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  if (Serial.available()){

    recievedChar = Serial.read();
    Serial.write(recievedChar);

    if (recievedChar == 0) {
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    } else {
      if (recievedChar == 1) {
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      } else {
        Serial.write(recievedChar);
      }
      
    }
  }
}
