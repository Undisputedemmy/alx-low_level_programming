#include "main.h"

/**
  * print_line - draws a straight line
  * @n: number of lines
  */

void print_line(int n)
{
	int l;

	for (l = 0; l <= n; l++)
	{
		if (l != 0)
		{
			_putchar('_');
	}
	}
		_putchar('\n');
}
