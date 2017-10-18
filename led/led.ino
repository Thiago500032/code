int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT);  
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(9);
if (x == HIGH) {
   digitalWrite(8, LOW);
 }
 else {
   digitalWrite(8, HIGH);
   }
}
