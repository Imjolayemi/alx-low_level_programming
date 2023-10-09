#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	char z = 'z';

	for (; z >= 'a'; z--)
	{
		putchar (z);
	}
	putchar ('\n');
	return (0);
}
