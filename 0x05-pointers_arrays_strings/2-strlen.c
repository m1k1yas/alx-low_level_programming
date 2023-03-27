#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string passed from the main function
 *
 * Return: returns the count to the main function
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
	count++;
	s++;
	}
return (count);
}
