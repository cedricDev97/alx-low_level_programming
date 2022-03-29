#include "main.h"
/**
 * _strspn - gets lengthof a prefixe substring
 * @s: string to check
 * @accept: string to check againt
 *
 * Return: number of bytes of s ine accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j=++)
{
if (s[i] == accept[j])
	break;
}
if (!accept[j])
	break;
}
return (i);
}
