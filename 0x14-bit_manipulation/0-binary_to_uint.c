#include "main.h"

/**
 * binary_to_uint: - cnverts a binary number
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;
	int length;

	if (b[length] = '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		number <<= 1;
		number += b[length] - '0';
		length++;
	}

	return (number);
}
