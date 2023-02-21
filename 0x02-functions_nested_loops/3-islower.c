#include "main.h"
/**
 * main - entry point
 *
 * description: This task compare an input character (_islower)
 *
 * return 0 always successful
 */
int _islower(int c)
{
	int letters;

	letters = 'a';
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (c == letters)
		{
			return (1);
		}
	}
	return (0);
}
