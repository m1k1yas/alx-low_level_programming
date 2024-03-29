#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: String to look for
 * @accept: String to look from
 *
 * Return: Returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		pos = i;
	}
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
