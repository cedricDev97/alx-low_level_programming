#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
int i, count;
char leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";
i = 0;
while (s[i] != '\0')
{
count = 0;
while (count < 10)
{
if (lettLetters[count] == s[i])
{
s[i] = leetNums[count];
}
count++;
}
i++;
}
return (s);

}
