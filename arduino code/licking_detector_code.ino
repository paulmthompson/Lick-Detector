//Arduino code for detecting licks from circuit; prints "Lick detected!" at start of lick and turns on LED for duration of lick

void lick_detect () {
  if(digitalRead(2) == LOW) {
    Serial.println("Lick detected!");
    num_licks++;
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}

void setup () {
  Serial.begin(9600);
  Serial.println("Program start.");
  
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(2), lick_detect, CHANGE);
}

void loop () {

}
