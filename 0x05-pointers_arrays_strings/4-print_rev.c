#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that hold the reverse of a string
 * @s: Reverse string
 */

/* Declaration of function */
void print_rev(char *s)
{
	int c;

	c = 0;
	for (; s[c] != '\0'; c++);
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar(10);
}
