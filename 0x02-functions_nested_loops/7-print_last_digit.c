#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @numero: last digit
 *
 * Return: i
 */
int print_last_digit(int numero)
{
int i, p;
i = numero % 10;
if (i < 0)
i = -i;
p = '0' + i;
_putchar (p);
return (i);
}



