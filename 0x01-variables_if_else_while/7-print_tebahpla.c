#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');

	return (0);
}
