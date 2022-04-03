#include <sdtio.h>
#include "main.h"

/**
 * main - Print thename of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int (int argc, char *argv[])
{

int i = 0;

if (argc > 0)
{
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
}
return (0);
}
