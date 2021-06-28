#include "holberton.h"
/**
 * swap_int - swaps the values of the variables
 * @a: pointer variable
 * @b: pointer variable
 *
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
