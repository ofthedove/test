#include <Arduino.h>

extern "C"
{
#include "tiny_time_source.h"
#include "tiny_timer.h"

#include "tiny_stream_uart.h"
}

tiny_timer_group_t timers;
tiny_stream_uart_t uart;

// put function declarations here:
int myFunction(int, int);

void setup()
{
   // put your setup code here, to run once:
   int result = myFunction(2, 3);
   (void)result;

   i_tiny_time_source_t *time_source = tiny_time_source_init();
   tiny_timer_group_init(&timers, time_source);

   tiny_stream_uart_init(&uart, &timers, Serial);
   (void)uart;
}

void loop()
{
   // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y)
{
   return x + y;
}
