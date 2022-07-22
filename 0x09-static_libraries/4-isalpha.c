#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: The character to print
*
* Return: 1 if is a letter, lowercase or uppercase..
* Otherwise retrn 0.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		if (c >= 'A' && c <= 'Z')
		{
		return (1);
		}
		else
		{
		return (0);
		}
	return (0);
}
