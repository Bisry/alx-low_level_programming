#include "holberton.h"
/**
 * _isalpha - check for lowercase and uppercase letters
 * @c:caracter to check
 *
 *
 * Return: 0 or 1
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
