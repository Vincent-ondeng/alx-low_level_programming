#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return : Always 0 (Success)
 * 1 on error.
 */
int main(int argc, char *argv[])
{
	int count, product;

	product = 1;
	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			product *= atoi(argv[count]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
