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

//mettre à 1 le bit 5 car la LED qu'on veut allumer correspond au PB5
void setup() {
    DDRB =  DDRB | (1 << 5);
}

void ledOn() {
  PORTB = PORTB | (1 << 5);//passage du bit 5 à 1
}

void ledOff() {
  PORTB = PORTB & ~ (1 << 5);//passage du bit 5 à 0 car AND NOT (...)
}

void ledToggle() {
    PINB |= (1 << 5);
}
void loop() {
    ledToggle();
    // delay(1000);
    TCCR1A = 0;
    TCCR1B = 13;//1101
    TIMSK1 = 2;//10
    //Fréquence / prescaler (1024 ici) --> fréquence 16 000 000 / 1024 = 26625 
}