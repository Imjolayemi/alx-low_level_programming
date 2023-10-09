#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	char a = 'a';
	for (; a <= 'z'; a++)
	{
		if ((a == 'q') || (a == 'e'))
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
