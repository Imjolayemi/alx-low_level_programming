#include <unistd.h>

/**
 * _putchar - The function will print out to stdio
 *
 * Return: The return will always return thyhe character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
