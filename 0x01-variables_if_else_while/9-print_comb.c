#include<stdio.h>
/**
 * main - entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i < 58; i++)
{
	putchar(i);
	j = i;
	if (j < 57)
	{
	putchar(44);
	putchar(32);
	}
}
putchar(10);
return (0);
}
