// author: hasan ijaz
// description: Connect sound sensor to A0 and read value and send over serial


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  if(analogRead(A0) > 200)
    digitalWrite(2, HIGH);
  else
    digitalWrite(2, LOW);
    
  delay(100);
}
