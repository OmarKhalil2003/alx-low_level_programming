#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @bu: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *bu)
{

	unsigned int j = 0;
	if (!bu)
		return (0);
	for (int i = 0; bu[i] != '\0'; i++)
	{
		if (bu[i] != '0' && bu[i] != '1')
			return (0);
	}
	for (int i = 0; bu[i] != '\0'; i++)
	{
		j <<= 1;
		if (bu[i] == '1')
			j += 1;
	}
	return (j);
}
