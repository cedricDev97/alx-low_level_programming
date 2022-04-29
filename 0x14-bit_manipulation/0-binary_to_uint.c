#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int ui = 0;
	int i;

	if (!b)
		return (0);


	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ui = 2 * ui + (b[i] - '0');
	}

	return (ui);

}
