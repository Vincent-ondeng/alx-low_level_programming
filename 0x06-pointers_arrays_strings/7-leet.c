#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetnums[] = "4433007711";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetcount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
