#include "sudoku.h"

void	set_possibilities(int *arr)
{
	int count;

	count = 0;
	while (count < 9)
	{
		arr[count] = 0;
		count++;
	}
}

int		*check_box(int x, int y, char **board, int *possibilities)
{
	int countr;
	int countc;
	int newx;
	int newy;

	countr = 0;
	while (countr < 3)
	{
		countc = 0;
		while (countc < 3)
		{
			newx = x - (x % 3) + countr;
			newy = y - (y % 3) + countc;
			if (board[newx][newy] != '0')
				possibilities[board[newx][newy] - '0' - 1] = 1;
			countc++;
		}
		countr++;
	}
	return (possibilities);
}

int		*check(int x, int y, char **board, int *possibilities)
{
	int countc;
	int countr;

	countc = 0;
	countr = 0;
	set_possibilities(possibilities);
	while (countc < 9)
	{
		if (board[x][countc] != '0')
			possibilities[board[x][countc] - '0' - 1] = 1;
		countc++;
	}
	while (countr < 9)
	{
		if (board[countr][y] != '0')
			possibilities[board[countr][y] - '0' - 1] = 1;
		countr++;
	}
	check_box(x, y, board, possibilities);
	return (possibilities);
}