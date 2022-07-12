#include "main.h"

/**
* _puts - prints a string
* @str: string
*/

void _puts(char *str)
{
	char *read = str;

	while (*read != '\0')
	{
		_putchar(*read);
	read++;
	}
	_putchar('\n');
}
