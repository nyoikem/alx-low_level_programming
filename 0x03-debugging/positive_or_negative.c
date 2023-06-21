#include "main.h"

/**
 * positive_or_negative(int n) - Determine positive, negative or zero
 * 0: the number to be checked
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return;
}
