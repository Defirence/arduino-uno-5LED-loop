
/* A simple program to sequentially turn on and turn off 5 LEDs */ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(200);                  // wait for 200ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(200);                  // wait for 200ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(200);                  // wait for 200ms
  digitalWrite(LED4, HIGH); // LED 4 ON
  delay(300);
  digitalWrite(LED5, HIGH); // LED 5 ON
  delay(300);
  digitalWrite(LED1, LOW);     // turn off LED1
  delay(300);                  // wait for 300ms
  digitalWrite(LED2, LOW);     // turn off LED2
  delay(300);                  // wait for 300ms
  digitalWrite(LED3, LOW);     // turn off LED3
  delay(300);
  digitalWrite(LED4, LOW); // LED 4 OFF
  delay(300);
  digitalWrite(LED5, LOW); // LED 5 OFF
  delay(300);
  delay(300);                  // wait for 300ms before running program all over again
}
