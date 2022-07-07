#include "main.h"

/**
  * print_triangle - draws a straight line
  * @size: number of lines
  */

void print_triangle(int size)
{
	int l, x;

	for (l = 1; l <= size; l++)
	{
		for (x = size; x >= 1; x--)
		{
			if (x <= l)
			{
			_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
		if (size <= 0)
		{
		_putchar('\n');
		}

}
