#include "main.h"
/**
 * _isdigit - checkes if a char is a digit
 * @c: is digits
 * description: _isdigit checks if a char is digit.
 * Return: void
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
