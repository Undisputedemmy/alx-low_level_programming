#include "main.h"

/**
 * _islower - check main
 * @i: An integer input
 * Description: Write a function that checks for lowercase character
 * Return: 0 or 1.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
