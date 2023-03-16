int data = 0; // declaram o variabila de tip integer cu valoarea initiala 0
int sensor = 2; // Connected to digital output of sound sensor module
int led = 13; // Connected to postive of led


void setup() {
  Serial.begin(9600); // initializeaza comunicarea seriala
  pinMode(sensor, INPUT); // Setting the pin to input for reading data
  pinMode(led, OUTPUT); // Setting the pin to output for turning the led on/off
}

void loop() {
 
 int data = digitalRead(sensor); // citim valoarea de pe pinul senzorului si o stocam in "data"

  if (data == 1) { // daca data == 1, adica daca detectam sunet
      
      digitalWrite(led, HIGH); // aprindem ledul
      
      delay(2000); // asteptam 2 secunde
      
      long time = millis();
      Serial.println("sound!"); // aici am afisat timpul si "sound" in Serial Monitor pentru test
      Serial.println(time);
      
      digitalWrite(led, LOW); // stingem ledul

    }

}
