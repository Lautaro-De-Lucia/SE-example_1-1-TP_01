#include "mbed.h"
#include "arm_book_lib.h"
#include <cstdio>
// 21/3/2024
// Sistemas embebidos 

int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;
    printf("%s\n", "Hola somos el grupo 2748");
    printf("%s\n", "Lautaro De Lucia - 100203");
    printf("%s\n", "Ludmila Galvan Lopez -105975");
    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}