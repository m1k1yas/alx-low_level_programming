#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @i: variable passed from the main function
 *
 * Return: the absolute value
 *
 */
int _abs(int i)
{
	if (i < '0')
	{
		return (-i);
	}
	else
		return (i);
}
