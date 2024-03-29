#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
