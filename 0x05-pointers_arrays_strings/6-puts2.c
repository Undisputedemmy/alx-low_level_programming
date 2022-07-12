#include "main.h"

/**
  * puts2 - one char out of 2
  * @str: string
  */

void puts2(char *str)
{
	int tam = 0, i;

	while (str[tam] != '\0')
	{
		tam++;
	}
	i = 0;
	while (i < tam)
	{
		if (i % 2 == 0)
		{
		_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
