#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return:0, If big-endian
 *        1, If little-endian
 */
int get_endianness(void)
{
	int number = 1;
	char *endi = (char *)&number;

	if (*endi == 1)
		return (1);

	return (0);
}
