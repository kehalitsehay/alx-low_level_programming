#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet 10 times
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		char c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
