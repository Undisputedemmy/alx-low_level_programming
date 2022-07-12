#include "main.h"

/**
* rev_string - reverse a string
* @s: character
*/

void rev_string(char *s)
{
	int read = 0;
	char c;
	int i;

	while (s[read] != '\0')
	{
		read++;
	}
	for (i = 0; i < (read / 2); i++)
	{
		c = s[i];
		s[i] = s[read - i - 1];
		s[read - i - 1] = c;
	}
}
