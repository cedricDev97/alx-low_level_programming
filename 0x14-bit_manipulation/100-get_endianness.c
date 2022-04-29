#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;

	return (*c);
}
