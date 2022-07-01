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
	int low;

	for (low = 0; low <= 9; low++)
	{
		putchar(low + '0');
		if (low < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
