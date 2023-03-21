#include "main.h"
/**
 * print_alphabet_10x - prints alphabet10 times
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
			_putchar(i);
		}
		_putchar(10);
		j++;
	}
}
