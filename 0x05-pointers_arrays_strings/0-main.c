#include <stdio.h>
#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
