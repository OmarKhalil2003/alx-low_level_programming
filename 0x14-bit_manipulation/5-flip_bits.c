#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @na: the first number
 * @ma: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned int na, unsigned  int ma)
{
	unsigned long int dif, r;
	unsigned int j, i;

	j = 0;
	r = 1;
	dif = na ^ ma;
	for (i = 0; i < (sizeof(unsigned int) * 8); i++)
	{
		if (r == (dif & r))
			j++;
		result <<= 1;
	}

	return (j);
}
