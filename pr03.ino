const int LED1=13;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED1, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
