#include "main.h"

/**
 * swap_int - swapsthe values of two integers.
 * @a: first integer
 * @b: second integer
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
