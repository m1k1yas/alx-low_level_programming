#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: variable to set the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
