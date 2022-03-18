#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * 
 * Return: no return
 */
void more_numbers(void)
{
int i, num1, num2, result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
num2 = result;
}

else
{
num1 = result / 10;
num2 = result % 10;
_putchar (num1 + '0');
}

_putchar (num2 + '0');

result++;
}
i++;
result = 0;
_putchar ('\n');
}

}
