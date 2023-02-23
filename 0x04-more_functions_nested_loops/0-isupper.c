#include "main.h"
/**
 * main - entry point
 *
 * description: This task compare an input characte(upercase etters)
 *
 * return 0 always successful
 */
int _isupper(int c)
{
	int uppLetters;

	uppLetters = 'a';
	for (uppLetters = 'A'; uppLetters <= 'Z'; uppLetters++)
	{
		if (c == uppLetters)
		{
			return (1);
		}
	}
	return (0);
}
i
