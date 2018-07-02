/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 19:10:04 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/01 20:49:35 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	char	*ptr;
	int		res;

	res = 0;
	if (!(*s1) && !(*s2))
		return (1);
	if (*s2 == '*' && *(s2 + 1) == '*')
	{
		ptr = s1;
		while (ptr == s1 || *(ptr - 1))
		{
			res += nmatch(ptr++, s2 + 1);
		}
		return (res);
	}
	if (*s2 == '*')
	{
		ptr = s1;
		while (ptr == s1 || *(ptr - 1))
			res += (nmatch(ptr++, s2 + 1));
		return (res);
	}
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	return (0);
}
