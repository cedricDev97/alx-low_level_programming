#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - string there are digit
 * @str:array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)

{
/*Declaring variables*/
unsigned int i;

i = 0;
while (i < strlen(str))
{
if (!isdigit(str[i])) /* verifier si il n'ya pas de chiffre*/
{
return (0);
}
i++;
}
return (1);
}

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
int i;
int str_to_int;
int sum = 0;

i = 0;
while (i < argc)
{
if (check_num(argv[i]))
{
str_to_int = atoi(argv[i]);
sum += str_to_int;
}


else
{
printf("Error\n");
return (1);
}

i++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
