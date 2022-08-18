#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it works or -1 if an error occured
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
