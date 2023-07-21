#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
_putchar('Fizz ');
}
else if (i % 5 == 0)
{
_putchar('Buzz ');
}
else if (i % 3 == 0 && i % 5 == 0)
_putchar('FizzBuzz ');
}
else
{
_putchar('0' + i);
}
}
_putchar('\n');
return (0);
}
