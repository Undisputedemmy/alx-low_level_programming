#include "main.h"

/**
* *_strcpy - copies string to the buffer
* @dest: pointer
* @src: pointer to buffer
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (i);
}
