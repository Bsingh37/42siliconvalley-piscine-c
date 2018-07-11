/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:58:02 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/08 14:21:34 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_atoi.c"

void	rush01(int x, int y)
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
