#include "main.h"
/**
 * print_alphabet_x10 - Prints "alphabet\n" string
 *
 *
 * Return: void.
 *
 */
void print_alphabet_x10(void)
{
char bc;
int i;
for (i = 0; i < 10; i++)
{
for (bc = 'a'; bc <= 'z'; bc++)
{
_putchar(bc);
}
_putchar('\n');
}
}
