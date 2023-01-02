#include"main.h"

/**
 * print_chessboard - prints the chessboard.
 * @board: input board double array
 */
void print_chessboard(char board[8][8])
{
	int i;

	for (i = 0; board[i][0]; i++)
	{
		int j;

		for (j = 0; board[i][j]; j++)
		{
			_putchar(board[i][j] + '0');
		}
		_putchar('\n');
	}
}
