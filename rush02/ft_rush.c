/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:03:54 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/08 12:12:54 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_00(int x, int y)
{
	int wid;
	int hgt;

	wid = x;
	hgt = y;
	y = 1;
	while (y <= hgt)
	{
		x = 1;
		while (x <= wid)
		{
			if (((x == 1 || x == wid) && (y == 1 || y == hgt)))
				ft_putchar('o');
			else if (((wid > x) && (x > 1) && (hgt > y) && (y > 1)))
				ft_putchar(' ');
			else if ((((x > 1 && wid > x) && ((y == 1))) || (y == hgt)))
				ft_putchar('-');
			else
				ft_putchar('|');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush_01(int x, int y)
{
	int wid;
	int hgt;

	wid = x;
	hgt = y;
	y = 1;
	while (y <= hgt)
	{
		x = 1;
		while (x <= wid)
		{
			if ((x == 1 && y == 1) || (x == wid && y == hgt && y > 1 && x > 1))
				ft_putchar('/');
			else if (((wid > x) && (x > 1) && (hgt > y) && (y > 1)))
				ft_putchar(' ');
			else if ((x == wid && y == 1) || (x == 1 && y == hgt))
				ft_putchar('\\');
			else
				ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush_02(int x, int y)
{
	int wid;
	int hgt;

	wid = x;
	hgt = y;
	y = 1;
	while (y <= hgt)
	{
		x = 1;
		while (x <= wid)
		{
			if ((x == 1 && y == 1) || (x == wid && y == 1))
				ft_putchar('A');
			else if (((wid > x) && (x > 1) && (hgt > y) && (y > 1)))
				ft_putchar(' ');
			else if ((x == 1 && y == hgt) || (x == wid && y == hgt))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush_03(int x, int y)
{
	int wid;
	int hgt;

	wid = x;
	hgt = y;
	y = 1;
	while (y <= hgt)
	{
		x = 1;
		while (x <= wid)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == hgt))
				ft_putchar('A');
			else if (((wid > x) && (x > 1) && (hgt > y) && (y > 1)))
				ft_putchar(' ');
			else if ((x == wid && y == 1) || (x == wid && y == hgt))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush_04(int x, int y)
{
	int wid;
	int hgt;

	wid = x;
	hgt = y;
	y = 1;
	while (y <= hgt)
	{
		x = 1;
		while (x <= wid)
		{
			if ((x == 1 && y == 1) || (x == wid && y == hgt && y > 1 && x > 1))
				ft_putchar('A');
			else if (((wid > x) && (x > 1) && (hgt > y) && (y > 1)))
				ft_putchar(' ');
			else if ((x == wid && y == 1) || (x == 1 && y == hgt))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
