#include <stdio.h>

/*
 * main - Entry Point
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	char hexanumber = 0x30;
	char hexaletter = 0x61;

	for (; hexanumber <= 0x39; hexanumber++)
	{
		putchar (hexanumber);
	}

	for (; hexaletter <= 0x66; hexaletter++)
	{
		putchar (hexaletter);
	}
	putchar('\n');
	return (0);
}
