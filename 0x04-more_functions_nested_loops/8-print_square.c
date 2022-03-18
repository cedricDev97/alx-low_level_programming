#include "main.h"

/**
 * print_square - draws square
 * @size: lenght and width of square
 *
 * Return: void
 */

void print_square(int size)
{

	int ligne;
	int col;

	if (size > 0)
	{
	
		for (ligne = 0; ligne < size; ligne++)
		{
			for (col = 0; col < size; col++)
			{
			
				_putch('#');
			}
			_putchar('\n');
		}
	
	}
	else
	{
	
		_putchar('\n');
	}

}
