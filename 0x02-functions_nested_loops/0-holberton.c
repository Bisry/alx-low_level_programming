#include "main.h"
/**
 * main - Prints Holberton
 * @void: Empty parameter list for main.
 *
 * Description: Prints Holberton w/out stdio
 *
 * Return: 0 for success
 */
int main(void)
{
int i;
char p[8] = "Holberton";

for (i = 0; i < 8; i++)
{
_putchar(p[i]);
}
_putchar('\n');
return (0);
}
