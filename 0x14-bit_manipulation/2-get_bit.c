#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int mask)
{
	unsigned long int dv, rs;

	if (mask > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dv = 1 << mask;
	rs = n & dv;
	if (rs == dv)
		return (1);

	return (0);
}
