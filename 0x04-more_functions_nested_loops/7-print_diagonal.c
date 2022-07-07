#include "main.h"

/**
  * print_diagonal - draws a straight line
  * @n: number of lines
  */

void print_diagonal(int n)
{
	int l, x;

	for (l = 0; l <= n; l++)
	{
		for (x = 1; x <= l; x++)
		if  (l == x)
		{
		_putchar('\\');
		_putchar('\n');
		}
		else
		{
		_putchar(' ');
		}
	}
		if (n <= 0)
		{
		_putchar('\n');
		}

}
