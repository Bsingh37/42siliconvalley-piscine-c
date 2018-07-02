/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 22:48:57 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/29 15:36:54 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'J') || \
				(str[i] >= 'a' && str[i] <= 'j'))
			str[i] += 16;
		else if ((str[i] >= 'K' && str[i] <= 'Z') || \
				(str[i] >= 'k' && str[i] <= 'z'))
			str[i] -= 10;
		else
			return (0);
		i++;
	}
	return (str);
}