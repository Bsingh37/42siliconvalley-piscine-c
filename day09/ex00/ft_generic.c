/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:22:52 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/28 20:04:55 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	char	*a;
	int		i;

	i = 0;
	a = "Tut tut ; Tut tut";
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
	ft_putchar('\n');
}
