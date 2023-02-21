#include "alx.h>
/**
 * main - entry point
 *
 * description: this project prints the lower slphabets
 *
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
