#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
