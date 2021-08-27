#include <stdio.h>

/**
 * main - This program prints the numbers 0 to 9 separated
 * by a comma and a space, minus the number 9.
 *
 * Return: 0.
 */

int main(void)
{
int d;

for (d = '0'; d <= '9'; d++)
{
putchar(d);

if (d != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
