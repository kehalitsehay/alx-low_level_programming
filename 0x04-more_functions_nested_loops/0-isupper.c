#include "main.h"
/**
 * _isupper - checkes if a char is uppercase letters
 * @c: is uppercase char
 * description: _isupper checks the uppercase letter
 * Return: void
 */
int _isupper(int c)
{
	int uppLetters;

	uppLetters = 'A';
	for (uppLetters = 'A'; uppLetters <= 'Z'; uppLetters++)
	{
		if (c == uppLetters)
		{
			return (1);
		}
	}
	return (0);
}
