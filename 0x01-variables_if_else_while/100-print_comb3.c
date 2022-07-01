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
	int d, j;

	for (d = 0; d <= 8; d++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (d < j)
			{
				putchar(d + '0');
				putchar(j + '0');
				if (d != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
