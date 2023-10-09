#include <stdio.h>
/**
 * main - Entry Point
 *
 * Retturn: Always Zero(0) Success
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	for (; a <= 'z'; a++)
	{
		putchar (a);
	}
	for (; A <= 'Z'; A++)
	{
		putchar (A);
	}
	putchar ('\n');
	return (0);
}
