/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:58:25 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/08 14:21:45 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_atoi.c"

void	rush02(int x, int y)
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
