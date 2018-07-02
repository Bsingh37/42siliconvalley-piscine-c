/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 11:01:59 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/29 15:37:18 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>i

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i > k && i < j))
		return (i);
	else if ((j > i && j < k) || (j > k && j < i))
		return (j);
	else if ((k > i && k < j) || (k > j && k < i))
		return (k);
	else
		return (0);
}
