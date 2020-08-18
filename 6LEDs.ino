int delaya = 100;

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
charlie(2, 2);
charlie(3, 1);
charlie(4, 0);
delay(delaya);
charlie(2, 2);
charlie(3, 0);
charlie(4, 1);
delay(delaya);
charlie(2, 0);
charlie(3, 2);
charlie(4, 1);
delay(delaya);
charlie(2, 1);
charlie(3, 2);
charlie(4, 0);
delay(delaya);
charlie(2, 0);
charlie(3, 1);
charlie(4, 2);
delay(delaya);
charlie(2, 1);
charlie(3, 0);
charlie(4, 2);
delay(delaya);
}
