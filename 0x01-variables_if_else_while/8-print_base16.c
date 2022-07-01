#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - No entry point
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	char low;
	char row;

	row = 'a';
	for (low = 0; low < 10; low++)
	{
		putchar(low + '0');
	}
	for (low = 10; low <= 15; low++)
	{
		putchar(row);
		row++;
	}
	putchar('\n');
	return (0);
}
