#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: variable passed from the main function
 *
 * Return: returns the last digit
 *
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		j = -j;
	}
		_putchar('0' + j);

		return (j);
}
