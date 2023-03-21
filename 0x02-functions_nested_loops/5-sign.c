#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: variable passed from the main function
 *
 * Return: 1 if positive, 0 if zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
