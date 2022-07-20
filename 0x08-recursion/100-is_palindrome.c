#include "main.h"
/**
 * _strlen - function that return the lenght of a string.
 * @s: input string.
 * Return: lenght of the string.
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * two_string - compare two string.
 * @s: input string
 * @n: input lenght of string - 1.
 * @x: input zero position.
 * Return: 0 or 1.
 */
int two_string(char *s, int x, int n)
{
	if (x == n)
		return (1);
	if (x > n)
		return (1);
	if (s[x] == s[n])
		return (two_string(s, x + 1, n - 1));
	return (0);
}
/**
 * is_palindrome - calculate if a string is palindrome or not.
 * @s: input string.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (two_string(s, 0, (_strlen(s) - 1)));
}
