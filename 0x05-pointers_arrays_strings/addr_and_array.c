#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zer(0) Success
 */

int main(void)
{
	char a[10];
	int b[10];

	printf("The type of (a) is char\n");
	printf("a address: %p\n", a);
	printf("a[10] value: %d\n", a[10]);
	printf("&a address: %p\n", &a);
	printf("&a[10] address: %p\n", &a[10]);
	printf("size of a: %ld\n", sizeof(a));
	printf("si;ze of &a: %ld\n", sizeof(&a));
	printf("---------------------------------");
	printf("The type of (b) is int\n");
	printf("b address: %p\n", b);
	printf("b[10] value: %d\n", b[10]);
	printf("&b address: %p\n", &b);
	printf("&b[10] address: %p\n", &b[10]);
	printf("size of b: %ld\n", sizeof(b));
	printf("size of &b: %ld\n", sizeof(&b));
	return (0);
}
