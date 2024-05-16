#include <Arduino.h>

// Declaração das constantes que representam os pinos digitais conectados ao fotoresistor e ao laser
const int fotoresistorPin = 7;
const int laserPin = 8;
const int buzzer = 6;

// Variáveis para armazenar o tempo inicial e final
unsigned long tempoInicial = 0;
unsigned long tempoFinal = 0;
volatile byte valorFotorresistor = 0;
byte contador = 0;
bool bloqueado = false;

void setup() {
  Serial.begin(9600);
  delay(10);
  pinMode(fotoresistorPin, INPUT);
  pinMode(laserPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(laserPin, HIGH);
  TCCR1A = 0;
  TCCR1B = 0;
  TCCR1B = (1 << CS12) | (1 << WGM12);
  TIMSK1 = (1 << OCIE1A);
}

ISR(TIMER1_COMPA_vect) {
  byte valorFotorresistorAntigo = valorFotorresistor;
  valorFotorresistor = digitalRead(fotoresistorPin);
  if (valorFotorresistorAntigo == HIGH && valorFotorresistor == LOW)
    bloqueado = true;
}

void loop() {
  if (bloqueado) {
    bloqueado = false;
    if (contador == 0) {
      tempoInicial = millis();
      Serial.println("Cronômetro iniciado");
      contador++;
    } else if (contador < 3) {
      contador++;
    } else {
      tempoFinal = millis();
      contador = 0;
      unsigned long tempoTotal = tempoFinal - tempoInicial;
      Serial.print("Tempo final: ");
      Serial.print(tempoTotal);
      Serial.println(" ms");
    }
  }
}
