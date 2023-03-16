# IoT - Android Things - Individual project - Filipas Razvan 233/1

## Noise detector
  Acest proiect IoT utilizează un senzor de sunet pentru a detecta un zgomot și un LED pentru a semnaliza această detectare. Când senzorul detectează un zgomot, LED-ul se aprinde timp de 2 secunde, semnalizând astfel detectarea. Acest proiect poate fi utilizat în diverse aplicații practice, de exemplu parte a unui sistem de alarmă.

## Short demo
https://user-images.githubusercontent.com/117570113/225617351-5ec71f7a-1fcc-478e-a5c9-273cf8a68aec.mp4

## Schematics plan

![IOT1](https://user-images.githubusercontent.com/117570113/225619161-951a2ce4-aad2-4b8d-a663-84b9eaae799e.jpg)
![IOT3](https://user-images.githubusercontent.com/117570113/225619170-9ceba6e8-06e6-4812-801c-68fd56be0a04.gif)

## Video with sound

https://user-images.githubusercontent.com/117570113/225617407-68da03f6-e799-40d6-ab7c-57f48d7c480c.mp4

## Cod sursa Arduino

```
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
```

test
