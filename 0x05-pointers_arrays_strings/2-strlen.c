#include "main.h"

/**
 * _strlen - The function
 * @s: string to count
 *
 * Return: Always return the value of length if successfull
 */

/* Declaration of function */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);

}
