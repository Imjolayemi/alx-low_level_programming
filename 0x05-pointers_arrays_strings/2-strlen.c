#include "main.h"

/**
 * _strlen - The function to know the length of a string
 * @s: string to know the length
 * @length: Determine the length of the string
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
