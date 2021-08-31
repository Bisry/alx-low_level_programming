#include "holberton.h"
/**
 * print_sign - funcion that prints of a number
 * @n:caracter to check
 *
 *
 * Return: 1 ,0 or -1
 *
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(43);
return (1);
}
}
