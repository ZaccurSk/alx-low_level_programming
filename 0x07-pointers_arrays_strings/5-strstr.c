#include "main.h"
#include <stdio.h>

/**
 * *_strstr - This function locates a substring
 * @haystack: The string to search through
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located string; Otherwise, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
