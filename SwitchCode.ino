int pushButton = 12;
int LED=3;
void setup() {
  // initialiing the pins for input and output
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(pushButton, INPUT);
}

void loop() {
  // reading input from button
  int buttonState = digitalRead(pushButton);
  if (buttonState==HIGH)
  {digitalWrite(LED,HIGH);
  Serial.println("The Button is ON: ");
  Serial.println(buttonState);
  }
  
  else
  {
  digitalWrite(LED,LOW);
  }
  delay(1);
}
