#include "main.h"

/**
* jack_bauer - function
* Descriptio: Print every minute of the day of Jack Bauer, from 00:00 to 23-59
*
* Return: Always 0
*/
void jack_bauer(void)
{
int hour_a, hour_b, min_a, min_b;
for (hour_a = 0; hour_a <= 2; hour_a++)
{
for (hour_b = 0; hour_b < 24; hour_b++)
{
for (min_a = 0; min_a < 6; min_a++)
{
for (min_b = 0; min_b <= 9; min_b++)
{
_putchar(hour_a + '0');
_putchar((hour_b % 10) + '0');
_putchar(':');
_putchar(min_a + '0');
_putchar(min_b + '0');
_putchar('\n');
}
}
}
}
}
