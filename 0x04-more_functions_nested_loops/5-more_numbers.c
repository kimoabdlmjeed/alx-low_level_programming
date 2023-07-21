#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return:void
 */
void more_numbers(void)
{
char i;
char j;
for (i = 0; i < 11 ; i++)
{
for (j = 0; j < 15 ; j++)
{
_putchar('0' + j);
}
_putchar('\n');
}
}
