#include "main.h"

/**
  * _print_rev_recursion - reverse a string
  * @s: parameter
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
