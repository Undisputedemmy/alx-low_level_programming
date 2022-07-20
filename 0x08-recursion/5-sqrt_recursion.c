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
		return (i);
	}

	if (i * i > n)
	{
		return (-1);
	}

	return (numb(n, i + 1));

}

/**
  * _sqrt_recursion - natural square root
  * @n: number
  * Return: square root
  **/

int _sqrt_recursion(int n)
{

	return (numb(n, 0));
}
