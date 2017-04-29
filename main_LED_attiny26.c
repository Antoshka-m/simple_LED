/*
 * main.c
 *
 *  Created on: Apr 3, 2017
 *      Author: antonio
 */
#define F_CPU 1000000UL // 1 MHz clock speed
#define LED_PORT PORTA
#define LED_PIN PA0
#define LED_DDR DDRA

#include <avr/io.h>
#include <util/delay.h>

int i;
int main(void)
{
LED_DDR |= (1<<LED_PIN);  //A0 as output

while(1) //infinite loop
  {
      LED_PORT |= (1<<LED_PIN);
    for (i=0; i<10; i++) {_delay_ms(100);} //1 second delay
    LED_PORT &= ~(1<<LED_PIN); //Turns OFF All LEDs
    for (i=0; i<10; i++) {_delay_ms(100);} //1 second delay
  }
}

