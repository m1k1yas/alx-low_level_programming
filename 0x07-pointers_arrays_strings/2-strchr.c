#include "main.h"

/**
 * _strchar - locates a character in a string
 * @s: string for lookup
 * @c: character to be searched
 *
 * Return: Returns a pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
