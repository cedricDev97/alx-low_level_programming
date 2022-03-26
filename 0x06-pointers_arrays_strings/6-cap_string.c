#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
int k, l;

char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (k = 0; s[k] != '\0'; k++)
{
if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
s[k] -= 32;

for (l = 0; l < 13; l++)
{
if (s[k] == sep[l])
{
if (s[]k + 1 >= 'a' && s[k + 1] <= 'z')
{
s[k + 1] -= 32;
}
}
}
}
return (s);
}
