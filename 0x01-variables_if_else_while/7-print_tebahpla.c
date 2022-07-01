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

	low = 'z';
	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
