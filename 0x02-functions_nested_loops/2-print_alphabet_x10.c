#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print out alphabet to the stdio
 * @void: Representing empty value
 *
 * Return: For Successful execution it returns (1)
 * error returns (-1)
 */

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
