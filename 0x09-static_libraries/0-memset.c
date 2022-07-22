#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: the string pointed to
* @b: the character to copy
* @n: the size to print
*
* Return: Pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}
