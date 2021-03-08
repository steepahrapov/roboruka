#define pinX A0       // ось X джойстика
#define pinY A1       // ось Y джойстика
#define pinZ A2       // ось Z джойстика
#define pinW A3       // ось W джойстика
#define pinE A4       // ось E джойстика

#include <Servo.h> // подключаем библиотеку для серво
Servo servo1;           // объявляем объект servo1
Servo servo2;           // объявляем объект servo2
Servo servo3;           // объявляем объект servo3
Servo servo4;           // объявляем объект servo4
Servo servo5;           // объявляем объект servo5

void setup() {
   pinMode(pinX, INPUT); // указываем пин для джойстика
   pinMode(pinY, INPUT);  // указываем пин для джойстика
   pinMode(pinZ, INPUT);  // указываем пин для джойстика
   pinMode(pinW, INPUT);  // указываем пин для джойстика
   pinMode(pinE, INPUT);  // указываем пин для джойстика

   servo1.attach(9);            // указываем пин для первого серво
   servo2.attach(10);         // указываем пин для второго серво
   servo3.attach(11);         // указываем пин для второго серво
   servo4.attach(12);         // указываем пин для второго серво
   servo5.attach(13);         // указываем пин для второго серво
}
 
void loop() {
   int X = analogRead(pinX);      // считываем значение оси X
   int Y = analogRead(pinY);      // считываем значение оси Y
   int Z = analogRead(pinZ);      // считываем значение оси Z
   int W = analogRead(pinW);      // считываем значение оси W
   int E = analogRead(pinE);      // считываем значение оси E

   X = map(X, 0, 1023, 0, 180); // переводим значение X в новый диапазон
   Y = map(Y, 0, 1023, 0, 180);  // переводим значение Y в новый диапазон
   Z = map(Z, 0, 1023, 0, 180);  // переводим значение Z в новый диапазон
   W = map(W, 0, 1023, 0, 180);  // переводим значение W в новый диапазон
   E = map(E, 0, 1023, 0, 180);  // переводим значение E в новый диапазон
  
   servo1.write(X);                      // поворачиваем первый серво
   servo2.write(Y);                      // поворачиваем второй серво
   servo3.write(Z);                      // поворачиваем второй серво
   servo4.write(W);                      // поворачиваем второй серво
   servo5.write(E);                      // поворачиваем второй серво
}
