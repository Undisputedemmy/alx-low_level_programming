#include "main.h"

/**
* _strlen - length of a string
* @ss: character
* Return: length
*/

int _strlen(char *ss)
{
	int tam = 0;

	while (*ss != '\0')
	{
		tam++;
		ss++;
	}
	return (tam);
}

/**
* print_rev - prints a string in reverse
* @s: character
*/

void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
