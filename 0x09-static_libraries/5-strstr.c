#include "main.h"

/**
* *_strstr - locates a substring
* @haystack: the string pointed to
* @needle: substring
*
* Return: pointer to beginning of substring.
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

	if (!*j)
	{
		return (i);
	}
		haystack = i + 1;
	}
	return (0);
}
