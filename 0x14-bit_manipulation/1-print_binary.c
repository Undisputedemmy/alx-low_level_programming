#include "holberton.h"
#include <stdio.h>
/**
 * bin - converts decimal to binary and prints
 * @n: number to convert
 */
void bin(unsigned long int n)
{
	if (n != 0)
	{
		bin(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 * print_binary - prints binary representation
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		bin(n);
	}
}
