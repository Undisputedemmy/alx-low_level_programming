#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @n: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number n
 */

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = -1 * n % 10;
		_putchar(last + '0');
	}
	return (last % 10);
}
