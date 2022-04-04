#include <stdio.h>
#include <stdlib.h>
/**
 * main -function
 * @argc: argument count
 * @argv: value of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
/* declaration des variables*/
int total, nb_coin, monnaie, i;
coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);

if (total <= 0)
{
printf("0\n");
}
while (coins[i] != '\0')
{
if (total >= coins[i])
{
nb_coin = (total/coins[i]);
monnaie += nb_coin;
total -= nb_coin * coins[i];
}
i++;
}
printf("%d\n", monnaie);
return (0);
}
