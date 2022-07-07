#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, 10 times
*
*/

void more_numbers(void)
{
	int n;
	int r;

	for (r = 0; r < 10; r++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
		_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
