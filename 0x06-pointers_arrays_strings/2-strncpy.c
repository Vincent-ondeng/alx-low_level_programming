#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: A pointer to a character that will be changed
 * #src: A pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}
	return (dest);
}
