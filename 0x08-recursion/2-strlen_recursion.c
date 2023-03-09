#include "main.h"

/**
 * _strlen_recursion - Return length length of string.
 * @s: length of string to be maintained
 *
 * * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));

}

