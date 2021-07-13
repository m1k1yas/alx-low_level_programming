#include "holberton.h"
#include <stdio.h>
/**
 *main - prints its name
 *@argc: size parameters
 *@argv: array pointer parameters
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
int count;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("argv[%d] = %s\n", count, argv[count]);
}
}
else
{
printf("The command had no other arguments.\n");
}
return (0);
}
