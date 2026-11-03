#include "main.h"

/**
 * print_triangle - Prints a triangle using #
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 0; col < size - row; col++)
		{
			_putchar(' ');
		}

		for (col = 0; col < row; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
