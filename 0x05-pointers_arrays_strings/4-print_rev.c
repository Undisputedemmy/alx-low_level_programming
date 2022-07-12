#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* print_rev - prints a string in reverse
* @s: character
*/

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
