#define PIR_PIN D2
#define LED     D4

int pir_val = 0;
bool state  = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIR_PIN, INPUT);

  Serial.begin(9600);
 
}

void loop() {
  pir_val = digitalRead(PIR_PIN);
  if (pir_val == HIGH){
    digitalWrite(LED, LOW); 
    if(state == false){
        state = true;
        Serial.println("Motion Detected");
    }
  }
  else
  {
    digitalWrite(LED, HIGH);
    if(state == true){
      state = false;
      Serial.println("Motion Ended");
      
    }
  }
}
