#include "main.h"

/**
 * _isalpha - check main
 * @c: An integer input
 * Description: Write a function that checks for alphabetic character
 * Return: 1 or 0. (Success!)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
