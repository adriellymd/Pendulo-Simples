# Pêndulo Simples

Esse foi um projeto feito durante a matéria de Instrumentação Científica A. Consiste em um pêndulo simples, no qual é medido o seu período de oscilação em diferentes alturas utilizando um sensor de reflexão IR com fotodiodo. 

Este projeto tem como objetivo introduzir alguns conceitos sobre Arduino e circuitos eletrônicos. O pêndulo não é complexo e basicamente funciona como um temporizador.

## Introdução Teórica

O sensor de reflexão IR com fotodiodo é um dispositivo eletrônico que pode detectar a presença de um objeto em sua frente, medindo a quantidade de luz refletida. Ele consiste em um emissor IR (Infravermelho) que emite um sinal IR, e um fotodiodo que detecta a quantidade de sinal IR refletido pelo objeto. O sensor produz um sinal elétrico proporcional à quantidade de luz refletida.

Assim, o sensor de proximidade (Módulo Sensor de Reflexão IR) detectará a presença do pêndulo e transmitirá essa informação para o Arduino. Em seguida, o Arduino, por meio do código, realizará o cálculo do período, para as variadas alturas, e irá exibi-lo no monitor serial.

## Objetivo

Calcular o período do pêndulo em diferentes alturas, permitindo que o usuário possa ajustar a altura do pêndulo para obter novos dados.

## Materiais

- Arduino Uno
- Sensor de reflexão IR com fotodiodo
- Resistor de 220 ohms
- Pêndulo
- Suporte para o pêndulo e o sensor

## Metodologia

Para a implementação do projeto, foi utilizada a plataforma de simulação Tinkercad, que permite a construção e simulação de circuitos eletrônicos de forma virtual. O primeiro passo foi a seleção dos materiais necessários para a montagem do circuito.

## Esquema do Projeto

 <img src="https://github.com/httpadrfis/Pendulo-Simples/assets/127459067/83f2ecc5-e47d-4f1c-8977-5af0042693c6" alt="Screenshot 2024-05-16 193220">

## Imagem Real

https://github.com/httpadrfis/Pendulo-Simples/assets/127459067/e9612b5e-e544-417c-a679-85f3f222caa4

## Autora
[httpadrfis](https://github.com/httpadrfis).
