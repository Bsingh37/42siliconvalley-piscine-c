/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:22:24 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/04 21:15:47 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int n;

	n = nbr;
	if (begin_list == NULL)
		return (NULL);
	while (n-- && begin_list)
		begin_list = begin_list->next;
	return (n >= -1 ? begin_list : NULL);
}
