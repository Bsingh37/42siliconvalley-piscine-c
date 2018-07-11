/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:57:41 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/08 14:18:25 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "ft_atoi.c"

void	rush00(int x, int y)
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
