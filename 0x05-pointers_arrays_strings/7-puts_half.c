#include "main.h"

/**
* puts_half - prints half string
* @str: string
*/

void puts_half(char *str)
{
	int din = 0;
	int i;

	while (str[din] != '\0')
	{
		din++;
	}
	if (din % 2 != 0)
	{
	for (i = ((din + 1) / 2); i < din; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
	for (i = (din / 2); i < din; i++)
	{

	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
