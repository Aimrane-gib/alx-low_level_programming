#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: number of \
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n == 1)
	{
		_putchar('\\');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
