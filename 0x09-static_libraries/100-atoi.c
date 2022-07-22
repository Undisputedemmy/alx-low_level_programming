#include "main.h"

/**
  * _atoi - convert a string to an integer
  * @s: string
  * Return: integer
  */

int _atoi(char *s)
{
	unsigned int x = 0;
	int i = 0;
	int neg = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			neg = neg * -1;
		}
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		x = (x * 10) + (s[i] - '0');
		i++;
	}
	return (x * neg);
}
