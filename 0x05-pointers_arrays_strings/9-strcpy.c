#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 * @src: pointer.
 * @dest: pointer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
