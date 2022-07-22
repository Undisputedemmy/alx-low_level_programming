#include "main.h"

/**
* _puts - prints a string
* @str: string
*/

void _puts(char *str)
{
	char *t = str;

	while (*t != '\0')
	{
		_putchar(*t);
	t++;
	}
	_putchar('\n');
}
