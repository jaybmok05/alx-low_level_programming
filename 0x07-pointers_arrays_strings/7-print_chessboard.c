#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @arr: the parameter
 */

void print_chessboard(char (*arr)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(arr[row][col]);
		}
		_putchar('\n');
	}
}
