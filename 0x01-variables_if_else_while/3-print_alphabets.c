#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'Z' || ch <= 'z')
        {
                putchar(ch);
                if (ch == 'z')
		{
			ch = 'A';
		}
		else if (ch == 'Z')
		{
			break;
		}
		else
		{
			ch++;
		}
        }
	putchar('$');
        putchar('\n');
        return (0);
}
