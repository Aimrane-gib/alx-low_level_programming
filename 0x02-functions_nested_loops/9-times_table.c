#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n < 10)
			{
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			if (j != 9)
			{
				_putchar(',');
				if (n < 10 && (i * (j + 1)) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
