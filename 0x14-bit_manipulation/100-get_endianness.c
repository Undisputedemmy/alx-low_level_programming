#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *) &i;

	if (endian)
		return (1);
	return (0);
}
