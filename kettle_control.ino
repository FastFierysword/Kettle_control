void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);//enable serial monitor

}

// the loop function runs over and over again forever
void loop() {
  int pwm = analogRead(A0);//read analog value and put in to the variable
  pwm = map(pwm, 0, 1023, 0, 4000);// 0-1023 to 0-255
  Serial.println(pwm);//print serial monitor
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1600);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(800);                       // wait for a second
}
