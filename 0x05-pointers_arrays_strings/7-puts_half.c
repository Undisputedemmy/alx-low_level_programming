#include "main.h"

/**
* puts_half - prints half string
* @str: string
*/

void puts_half(char *str)
{
	int tam = 0;
	int i;

	while (str[tam] != '\0')
	{
		tam++;
	}
	if (tam % 2 != 0)
	{
	for (i = ((tam + 1) / 2); i < tam; i++)
	{
	_putchar(str[i]);
	}
	}
	else
	{
	for (i = (tam / 2); i < tam; i++)
	{

	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
