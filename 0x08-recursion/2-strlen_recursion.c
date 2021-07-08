#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer parameter
 * Return: count size
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
return (i + _strlen_recursion(s + 1));
}
else
{
return (i);
}
}
