#include "main.h"
/**
* _islower - checks for lowercase character
* @c: The character to print
*
* Return: 1 if lowercase.
* Otherwise 0 is returned..
*
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
