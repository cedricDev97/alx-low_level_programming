#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory space tobe filled
 * @b: byte to fill with
 * @n: number of the space to fill
 *
 * Return: pointer to memory ara s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i ++)
{
*(s + i) = b;
}
return (s);

}
