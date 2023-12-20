#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number to start from
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
