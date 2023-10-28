#include <stdio.h>

/**
 * main - Entry Point where the code is executed
 *
 * Return: Always Zero(0) Success
 */

int main(void)
{
	int var = 3000;
	int *ptr;
	int **pptr;

	ptr = &var;
	pptr = &ptr;

	printf("Address for *ptr is: %p\n", ptr);
	printf("Address for **pptr is: %p\n", pptr);
	return (0);
}
