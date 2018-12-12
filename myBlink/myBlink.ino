int led = 2;

// Usar ATtiny 25/45/85, CPU, Attiny 85, 8mhz, EEPROM reatined



void setup() {                
  pinMode(led, OUTPUT);     
}

// recordar que el Attiny va mas lento 50 ms son como 500 ms
void loop() {
  digitalWrite(led, HIGH);  
  delay(50);               
  digitalWrite(led, LOW);   
  delay(50);               
}
