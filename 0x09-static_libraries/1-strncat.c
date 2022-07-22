#include "main.h"

/**
* _strncat - concatenates two string
* @dest: string destiny
* @src: string to appends
* @n: number of bytes
* Return: a pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
