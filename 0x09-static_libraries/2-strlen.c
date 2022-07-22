#include "main.h"

/**
* _strlen - length of a string
* @ss: parameter
* Return: length
*/

int _strlen(char *ss)
{
	int tam = 0;

	while (*ss != '\0')
	{
		tam++;
		ss++;
	}
	return (tam);
}
