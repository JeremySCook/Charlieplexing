void setup() {
  // put your setup code here, to run once:

}

void charlie(int a, int b){
  if(b == 2){
    pinMode(a, INPUT);  
  }
  else{ 
    pinMode(a, OUTPUT);
    digitalWrite(a, b); 
  }
}

void loop() {
charlie(2, 0);
charlie(3, 1);
delay(500);
charlie(2, 1);
charlie(3, 0);
delay(500);
}
