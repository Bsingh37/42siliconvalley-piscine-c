#ifndef SUDOKU_H
# define SUDOKU_H

int		*check(int x, int y, char **board, int *possibilities);
void	find_next_pos(int row, int col, char **board, char **solved);
void	print_sudoku(char **arr);
int		error_check(int argc, char **argv);
void	check_place(int row, int col, char **board, char **solved);
void	putchar(char c);
void	print_error();
void	initialize(char **arr, char **argv, int num);

#endif