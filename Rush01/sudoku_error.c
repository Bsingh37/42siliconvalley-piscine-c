#include "sudoku.h"
#include <stdlib.h>

void	find_next_pos(int row, int col, char **board, char **solved)
{
	col++;
	if (col == 9)
	{
		col = 0;
		row = row + 1;
	}
	if (row == 9)
	{
		if (solved[0][0] == '0')
			initialize(solved, board, 0);
		else
			solved[0][0] = '$';
		return ;
	}
	if (board[row][col] == '0')
	{
		check_place(row, col, board, solved);
	}
	else
	{
		find_next_pos(row, col, board, solved);
	}
}

void	check_place(int row, int col, char **board, char **solved)
{
	int *possibilities;
	int count;

	possibilities = malloc(sizeof(int) * 9);
	check(row, col, board, possibilities);
	count = 0;
	while (count < 9 && solved[0][0] != '$')
	{
		if (possibilities[count] == 0)
		{
			board[row][col] = count + 1 + '0';
			find_next_pos(row, col, board, solved);
		}
		count++;
	}
	board[row][col] = '0';
}