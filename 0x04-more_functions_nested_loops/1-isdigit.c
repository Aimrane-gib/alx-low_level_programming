#include "main.h"

/**
 * _isdigit - Entry point
 *
 *@c: number to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
