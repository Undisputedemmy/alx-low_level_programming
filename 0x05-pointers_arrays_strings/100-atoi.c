#include "main.h"

/**
<<<<<<< HEAD
  *_atoi - convert string to integer.
  *@s: sring
  *Return: integer
  **/

int _atoi(char *s)
{
	int answer = 0, negative = 0, move = 1, size = 0, start = 0, end = 0, i = 0;
	unsigned int big = 0;

	if (s[0] == '\0')
		return (answer);
	while (s[size] != '\0')
		size++;
	while (s[start] < 48 || s[start] > 57)
	{
		start++;
		if (start == size)
			return (answer);
	}
	if (s[start - 1] == 45)
		negative++;
	end = start;
	while (s[end + 1] > 47 && s[end + 1] < 58)
		end++;
	for (i = end; i >= start; i--)
	{
		big = big + (s[i] - '0') * move;
		if (move < 1000000000)
			move = move * 10;
		if (big == 2147483648 && (negative % 2 != 0))
			answer = -2147483648;
		else
			answer = big;
		if (negative % 2 != 0)
			answer = -answer;
	}
	return (answer);
=======
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
>>>>>>> 8ac966bdc674573a268d0088a526d26b04d93f58
}
