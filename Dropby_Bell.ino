char data;

void setup(){
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop(){
  if(Serial.available()){
   data = Serial.read();

  if(data == '1'){
   Serial.println("LED ON");
   digitalWrite(3, HIGH);
  }
  else if (data == '2'){
   Serial.println("ALL LED OFF");
   digitalWrite(3, LOW);
   digitalWrite(5, LOW);
   digitalWrite(12, LOW);
  }
  else if (data == '3'){
   Serial.println("LED for Blind ON");
   digitalWrite(5, HIGH);
   digitalWrite(12, HIGH);
   delay(100);
   digitalWrite(12, LOW);
  }
  delay(100);
 }
}
