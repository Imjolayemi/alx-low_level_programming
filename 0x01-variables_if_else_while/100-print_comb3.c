#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always zero(0) Success
 */

int main(void)
{
	int a = 48;
	int b;

	for (; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if ((b == 57) && (a == 56))
				{
					break;
				}
				putchar(44);
				putchar(32);
			}	
		}
	}
	putchar(10);
	return (0);
}
