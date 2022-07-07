#include "holberton.h"

/**
  * print_square - draws a straight line
  * @size: number of lines
  */

void print_square(int size)
{
	int l, x;

	for (l = 1; l <= size; l++)
	{
		for (x = 1; x <= l; x++)
		{
			while (x <= size)
			{
			x++;
			_putchar('#');
			}
		}
		_putchar('\n');
	}
		if (size <= 0)
		{
		_putchar('\n');
		}

}
