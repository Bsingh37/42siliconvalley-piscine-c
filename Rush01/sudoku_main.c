#include <unistd.h>
#include <stdlib.h>
#include "sudoku.h"

void	print_sudoku(char **arr)
{
	int countc;
	int countr;

	countr = 0;
	while (countr < 9)
	{
		countc = 0;
		while (countc < 9)
		{
			putchar(arr[countr][countc]);
			if (countc != 8)
				putchar(' ');
			countc++;
		}
		putchar('\n');
		countr++;
	}
}

void	initialize(char **arr, char **argv, int num)
{
	int countc;
	int countr;

	countr = 0;
	while (countr < 9)
	{
		arr[countr] = malloc(sizeof(char) * 9);
		countc = 0;
		while (countc < 9)
		{
			arr[countr][countc] = argv[countr + num][countc];
			if (arr[countr][countc] == '.')
				arr[countr][countc] = '0';
			countc++;
		}
		countr++;
	}
}

int		main(int argc, char **argv)
{
	char **arr;
	char **solved;

	solved = malloc(sizeof(char*) * 9);
	solved[0] = malloc(sizeof(char) * 9);
	solved[0][0] = '0';
	if (error_check(argc, argv) == 0)
		return (0);
	arr = malloc(sizeof(char*) * 9);
	initialize(arr, argv, 1);
	find_next_pos(0, -1, arr, solved);
	if (solved[0][0] == '0' || solved[0][0] == '$')
		print_error();
	else if (solved[0][0] != '$')
		print_sudoku(solved);
	return (0);
}