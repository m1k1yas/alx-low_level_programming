#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: value passed from the main function
 *
 * Return: 1 if the character is alphabetic, else 0
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
