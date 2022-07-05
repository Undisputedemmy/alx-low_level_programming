#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check main
 * @n: An integer input n
 * Description: prints all natural numbers from n to 98, followed by new line
 * Return: Nothing
 */


void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
