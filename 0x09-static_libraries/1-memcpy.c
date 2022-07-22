#include "main.h"

/**
* *_memcpy - copies memory area
* @dest: the string pointed to
* @src: the string to copy
* @n: the size to print
*
* Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest, *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
