#include "main.h"

/**
 * _abs - Entry point
 * @n: number to check
 * Return: Always 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
