//Sana Yasamani Khiabani (3180650)
// Project 2, IF statement Code!
//2020-01-21

void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}


void loop() {
  Serial.println(analogRead(5));
  if (digitalRead(9) == HIGH) {
Serial.println("Button On");
    if (analogRead(5) < 700) {
      digitalWrite(11, HIGH);
      digitalWrite(13, LOW);
      digitalWrite(8, LOW);
    } else if (analogRead(5) > 800) {
      digitalWrite(11, LOW);
      digitalWrite(13, HIGH);
      digitalWrite(8, LOW);
    }
    else if (analogRead(5) > 600) {
      digitalWrite(11, LOW);
      digitalWrite(13, LOW);
      digitalWrite(8, HIGH);
    }
  } else {
    Serial.println("Button off");
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }

}
