#include "main.h"

/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */

int print_sign(int n)
{
int x;
if (n > 0)
{
_putchar('+');
x = 1;
}
else if (n == 0)
{
_putchar('0');
x = 0;
}
else
{
_putchar('-');
x = -1;
}
return (x);
}
