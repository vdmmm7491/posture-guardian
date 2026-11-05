

const int LED_PIN = 2;
const int FLASH_MS = 100;
const int PAUSE_MS = 700;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {


  digitalWrite(LED_PIN, HIGH);
  delay(FLASH_MS);
  digitalWrite(LED_PIN, LOW);
  delay(FLASH_MS);
  digitalWrite(LED_PIN, HIGH);
  delay(FLASH_MS);
  digitalWrite(LED_PIN, LOW);
  delay(PAUSE_MS);
  Serial.println("beat");
}

