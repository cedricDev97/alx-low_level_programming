#include "main.h"
#include <stdio.h>

/**
 * main - take the fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{

	int i;
	int p = 100;

	i = 1;
	while (i <= p)
	{
	
		if(i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}	
		else if (i % 3 == 0)
		{
		
		   printf("Fizz ");

		}

		else if (i % 5 == 0)
		{
		
			if (i < p)
			printf("Buzz ");

			else
			printf("Buzz");
		
		}	

		else
		{
		
			printf("%i ", i);
		}
			
		i++;			
	}
	printf("\n");
	return (0);

}
