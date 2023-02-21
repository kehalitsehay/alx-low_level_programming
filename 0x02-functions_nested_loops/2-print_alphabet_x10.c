#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char num = '0';
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
