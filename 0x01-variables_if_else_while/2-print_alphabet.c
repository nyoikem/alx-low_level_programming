#include <stdio.h>
/**
 * main – prints the alphabet in lower case
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = ‘a’;

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
