#include <unistd.h>

/**
 * _putchar - The function that accept the character
 * @c: The character to be printed out to the stdout
 *
 * Return: to return 1 when its successful
 * On error will return -1, which imploies error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
