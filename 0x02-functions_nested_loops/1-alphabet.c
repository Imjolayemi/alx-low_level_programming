#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - proint out alphabet to the stdio
 * @void: undeclared data type
 *
 * Return: Always Zero(0) Successfull
 * error return always return (-1)
 */

/* Declaration of a function */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
