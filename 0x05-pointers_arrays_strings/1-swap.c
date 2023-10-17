#include "main.h"

/**
 * swap_int - Function that holds the pointer variable a and b
 * @a: pointer variable a
 * @b: pointer variable b
 */

/* Declaration of function */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
