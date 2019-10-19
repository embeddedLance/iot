#define PIR_PIN D2
#define LED     D4

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIR_PIN, INPUT);

  Serial.begin(9600);
 
}

void loop() {
  if (digitalRead(PIR_PIN))
    digitalWrite(LED, LOW); 
  else
    digitalWrite(LED, HIGH);

  Serial.println(digitalRead(PIR_PIN));
}
