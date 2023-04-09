#include "main.h"

/**
 * get_bit - search the value of a bit at a given index.
 * @n: the bit number
 * @index: used to  get the value at index  start at 0.
 *
 * Return: If an error occurs - -1, Otherwise - the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
