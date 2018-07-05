/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:41:29 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/04 20:53:27 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list && begin_list)
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
