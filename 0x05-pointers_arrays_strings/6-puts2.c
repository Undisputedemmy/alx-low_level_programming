#include "main.h"

/**
  * puts2 - one char out of 2
  * @str: string
  */

void puts2(char *str)
{
	int try = 0, i;

	while (str[try] != '\0')
	{
		try++;
	}
	i = 0;
	while (i < try)
	{
		if (i % 2 == 0)
		{
		_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
