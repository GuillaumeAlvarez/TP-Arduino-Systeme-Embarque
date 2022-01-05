// #include <Arduino.h>

// #define LED 13

// void setup() {
//     pinMode(LED, OUTPUT);
// }

// void loop() {
//     digitalWrite(LED, HIGH);
//     delay(1000);
//     digitalWrite(LED, LOW);
//     delay(1000);
// }
//Code pour allumer et éteindre la LED avec les fcts de base Arduino

#include <Arduino.h>

#define LED 13

// #define PORTB

// void setup() {
//     pinMode(LED, OUTPUT);
// }

void setup() {
    DDRB =  DDRB | (1 << 5);
}

void ledOn() {
  PORTB = PORTB | (1 << 5);
}

void ledOff() {
  PORTB = PORTB & ~ (1 << 5);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}