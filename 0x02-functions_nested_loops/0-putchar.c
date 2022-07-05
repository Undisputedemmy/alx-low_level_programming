#include <stdio.h>
#include "main.h"
/**
 * main - check description
 *
 * Description: It prints the _putchar followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char say[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(say[i]);
	}
	_putchar(\n);
	return (0);
}
