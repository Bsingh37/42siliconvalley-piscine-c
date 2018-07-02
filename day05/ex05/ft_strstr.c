/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:10:37 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/26 18:03:47 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *dest, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (dest);
	while (dest[i] != '\0')
	{
		j = 0;
		while (to_find[j] == dest[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (dest + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
