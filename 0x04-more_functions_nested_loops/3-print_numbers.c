#include "main.h"

/**
 * print_numbers - entry point
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
