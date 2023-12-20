#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: number to modifie
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int c;

	if (n >= 0)
	{
		c = n % 10;
		_putchar('0' + c);
	}
	else
	{
		c = -1 * (n % 10);
		_putchar('0' + c);
	}
	return (c);
}
