const int button=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(button, HIGH);
}

void loop() {
  if(digitalRead(button)==LOW){
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
}
else{
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
}
