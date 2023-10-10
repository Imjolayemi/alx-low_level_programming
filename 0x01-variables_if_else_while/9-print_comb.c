#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	int number = 48;

	for (; number <= 57; number++)
	{
		putchar (number);
		if (number == 57)
		{
			break;
		}
		putchar (44);
		putchar (32);
	}
	putchar ('\n');
	return (0);
}
