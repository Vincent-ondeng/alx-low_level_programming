#include "main.h"

/**
 * _strstr - finds the first occurenceof the substring
 * needle in the string haystack.
 * @haystack: entire string
 * @needle: sunstring
 * Return: pointer to the beginning of the located substring or 
 * NULL if not found.
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
