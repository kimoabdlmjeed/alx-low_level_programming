#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
char a = 'a';
int i = 0;
for ( i = 0; i < 11; i++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
