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
int i = 0;
char bisry[] = "Holberton";

while (i <= 9)
{
_putchar(bisry[i]);
i++;
}
return (0);
}
