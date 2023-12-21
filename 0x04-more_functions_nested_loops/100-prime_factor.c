#include <stdio.h>

/**
 * main - Finds the largest prime factor of a given number.
 *
 * Return: 0
 */
int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%ld\n", i - 1);
	return (0);
}
