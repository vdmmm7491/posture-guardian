
void setup() {
 Serial.begin(115200);
  pinMode(2, OUTPUT); 

}

void loop() {
  digitalWrite(2, HIGH); delay(100);
  digitalWrite(2, LOW);  delay(100);
  digitalWrite(2, HIGH);  delay(100);
  digitalWrite(2, LOW);  delay(700);
  Serial.println("ESP32 alive");
}

