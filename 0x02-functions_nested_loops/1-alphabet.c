#include "main.h"

/**
 * print_alphabet - No entry point
 *
 * Return: Always 0 (success!)
 */

void print_alphabet(void)
{
	char cd;

	for (cd = 'a'; cd <= 'z'; cd++)
	{
		-putchar(cd);
	}
	-putchar('\n);
	return (0);
}

