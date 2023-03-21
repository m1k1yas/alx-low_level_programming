#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 * followed by a new line.
 *
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
		i++;
	}
}
