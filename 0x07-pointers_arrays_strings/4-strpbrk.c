#include "main.h"

/**
 * _strpbrk - searches a string for any bytes
 * @s: string to be searched
 * @accept: bytes in the string
 * Return: pointer to the byte in s that matches accept,
 * NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
