/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 12:56:28 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/02 22:07:53 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *new;
	int i;

	i = 0;
	new = malloc(sizeof(int*) * length);
	while (i < length)
	{
		new[i] = (*f)(tab[i]);
		++i;
	}
	return (new);
}
