#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - number of bits you would need to flip to get number to another
 * @n: number to flip
 * @m: number to be flipped
 * Return: the number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, i, number;

	number = n ^ m;
	for (i = 0; number != 0; i++)
	{
		if (number & 1)
			count++;
		number = number >> 1;
	}
	return (count);
}
