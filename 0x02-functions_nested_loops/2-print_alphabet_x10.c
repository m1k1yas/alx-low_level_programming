#include "main.h"
/**
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int i,j;
	i = 0;
	 while(i < 10)
	 {
		 for(j = 97; j < 123; j++)
		 {
			 _putchar(j);
		 }
		 _putchar(10);
		 i++;
	 }
}
