#include <stdio.h>
#include "main.h"

/**
 * times_table - check main
 * Description: Write a function that prints the 9 times table, starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, x, y, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = a * b;
			y = x / 10;
			z = x % 10;
			if (b > 0)
			{
			if (x >= 10)
			{
			_putchar(' ');
			_putchar(y = '0');
			_putchar(z = '0');
			{
			else
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(z + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('0' + z);
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

