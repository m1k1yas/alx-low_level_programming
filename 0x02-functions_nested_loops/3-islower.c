#include "main.h"
/**
 * _islower - checks if the character is lowercase
 * @c: input value passed from the main function
 *
 * Return: 1 if the character is lowercase, else 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
