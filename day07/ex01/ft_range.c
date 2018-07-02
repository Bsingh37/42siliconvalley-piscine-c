/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:41:25 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/28 16:20:46 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *new;

	new = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}
