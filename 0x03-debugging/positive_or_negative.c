#include "main.h"

/**
 * main - Determine positive, negative or zero
 * 0: the number to be checked
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
