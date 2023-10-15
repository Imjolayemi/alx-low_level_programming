#include <stdio.h>
#include "main.h"

/**
 */

/* Declaration of function */
void print_alphabet_x10(void)
{
	int a, length;

	for (length = 0; length < 10; length++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar(10);
	}
}
