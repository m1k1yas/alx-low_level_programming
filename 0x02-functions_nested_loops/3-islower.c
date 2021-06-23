#include "holberton.h"
/**
 *_islower - checking the conditions of if lowercase
 *
 *Return: 0 or 1
 */
int _islower(int c)
{
int result;

if (c >= 65 && c <= 90)
{
result = 0;
}
else if (c >=97 && c <= 122)
{
result = 1;
}
return (result); 
}
