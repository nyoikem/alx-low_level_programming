#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the numbers in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
