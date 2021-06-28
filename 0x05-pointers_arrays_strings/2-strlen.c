#include "holberton.h"
/**
 * _strlen - returns string length
 * @s: variable pointer
 * Return: count
 */

int _strlen(char *s)
{
int n = 0;
while (*s != '\0')
{
n++;
s++;
}
return (n);
}
