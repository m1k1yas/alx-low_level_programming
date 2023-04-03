#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to look from
 * @needle: word to look
 *
 * Return: Returns a pointer to the beginning of the located substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	const char *a, *b = needle;

	if (!*b)
	{
		return ((char *) haystack);
	}
	for ( ; *haystack ; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		for (;;)
		{
			if (!*b)
			{
				return ((char *) haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (0);
}
