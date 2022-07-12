#include "main.h"

/**
* rev_string - reverse a string
* @s: character
*/

void rev_string(char *s)
{
	int tam = 0;
	char c;
	int i;

	while (s[tam] != '\0')
	{
		tam++;
	}
	for (i = 0; i < (tam / 2); i++)
	{
		c = s[i];
		s[i] = s[tam - i - 1];
		s[tam - i - 1] = c;
	}
}
