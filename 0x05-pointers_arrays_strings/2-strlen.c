#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: the string to calculate its length
 * Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
