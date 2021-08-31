#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all naturals numbers from n to 98
 * @number: initial number
 * Return: void
 */

void print_to_98(int number)
{
while (number != 98)
{
printf("%i, ", number);
if (number < 98)
number++;
else
{
number--;
}
}
printf("98\n");
}
