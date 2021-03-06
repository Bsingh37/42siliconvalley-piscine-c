/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:58:47 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/26 16:41:35 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	if (i > n)
		return (src);
	while (dest[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
