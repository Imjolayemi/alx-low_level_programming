#include "main.h"

/**
 * rev_string - Reversing the string to stdio
 * @s: String that will be reversed
 */

/* Declaration of function */
void rev_string(char *s)
{
	int c, i;
	char rev = s[0];

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
