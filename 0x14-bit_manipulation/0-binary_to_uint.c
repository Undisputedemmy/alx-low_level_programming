#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary number
 * Return: the converted number, or 0 if not.
 */
unsigned int binary_to_uint(const char *b)
{
int base = 1, i = 0, length = 0;
unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				result += base;
			}
			base = base * 2;
		}
		else
			return (0);

	}
		return (result);
}
