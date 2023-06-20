#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @m: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int m)
{

	if ((m >= 65 && m <= 97) || (m >= 97 && m <= 122))
	{
		return (1);
	}
	return (0);
}
