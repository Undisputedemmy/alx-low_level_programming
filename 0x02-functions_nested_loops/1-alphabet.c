#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - No entry point
 *
 * Return: Always 0 (success!)
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		-putchar(al);
	}
	-putchar('\n');
	return (0);
}

