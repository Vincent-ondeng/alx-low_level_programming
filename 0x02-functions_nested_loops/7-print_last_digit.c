#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @n: input
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{

	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');
	return (n);
