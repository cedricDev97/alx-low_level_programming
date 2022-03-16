#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: void.
 */

void print_alphabet(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}

