#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
