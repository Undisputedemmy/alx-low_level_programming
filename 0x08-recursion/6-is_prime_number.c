#include "main.h"

/**
  * numb - value of a root
  * @n: number
  * @i: root
  * Return: root number
  */

int numb(int n, int i)
{

	if (i * i == n)
	{
		return (0);
	}

	if (i * i > n && n > 0)
	{
		return (1);
	}
	else if (i < 0 || n < 0)
	{
		return (0);
	}
	return (numb(n, i + 1));
}

/**
  * is_prime_number - prime number
  * @n: number
  * Return: prime number
  **/

int is_prime_number(int n)
{
	return (numb(n, 0));
}
