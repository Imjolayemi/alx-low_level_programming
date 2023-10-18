#include <stdio.h>
#include "main.h"

/**
 * main - Check on the code
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	char s[10] = "My school";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
