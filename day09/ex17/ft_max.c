/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:59:58 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/29 16:20:37 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int a;
	int i;

	i = 0;
	a = tab[0];

	while (i < length)
	{
		if (tab[i + 1] > a)
			a = tab[i + 1];
		i++;
	}
	return (a);
}
