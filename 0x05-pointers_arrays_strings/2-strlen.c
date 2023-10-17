#include "main.h"

/**
 * _strlen - The function to know the length of a string
 * @s: string to know the length
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
