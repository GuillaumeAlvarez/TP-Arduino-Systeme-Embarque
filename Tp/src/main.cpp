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

// #define LED 13

//#define PORTB

// void setup() {
//     pinMode(LED, OUTPUT);
// }


// void ledOn() {
//   PORTB = PORTB | (1 << 5);//passage du bit 5 à 1
// }

// void ledOff() {
//   PORTB = PORTB & ~ (1 << 5);//passage du bit 5 à 0 car AND NOT (...)
// }


////////////////////////////////////////
//TP écriture propres fcts pr allumer/éteindre LED
/////////////////////////////////////////////////////
// #include <Arduino.h>

// //mettre à 1 le bit 5 car la LED qu'on veut allumer correspond au PB5
// void ledSetup() {
//     DDRB =  DDRB | (1 << 5);
// }

// void ledToggle() {
//     PINB |= (1 << 5);
// }
// void timerSetup() {
//     ledToggle();
//     // delay(1000);
//     TCCR1A = 0;
//     TCCR1B = 13;//1101(1 << WGM12) | (1 << CS12) | (1 << CS10)
//     OCR1A = 15625;
//     TIMSK1 = 2;//10  (1 << OCIE1A)
//     //Fréquence / prescaler (1024 ici) --> fréquence 16 000 000 / 1024 = 26625 
// }

// //ISR c'est un define, déjà reconnu par le compilateur
// //paramètres TIMER1 c'est la syntaxe de vecteur d'interruption
// //interrutio, et micro-controleur va regarder à quelle adresse il faut faire l'interruption
// ISR(TIMER1_COMPA_vect) { 
//   ledToggle();
// }

// void setup() {
//   ledSetup();
//   timerSetup();
// }

// void loop() {
  
// }

#include <Arduino.h>

//mettre à 1 le bit 0 pour le mettre en sortie
void sortieSetup() {
    DDRB =  DDRB | (1 << 0);
}

void entreeSetup() {
    DDRB =  DDRB | (0 << 0);
}

void setup() {
  sortieSetup();
  delay(5);
  entreeSetup();
}

void loop() {
  
}