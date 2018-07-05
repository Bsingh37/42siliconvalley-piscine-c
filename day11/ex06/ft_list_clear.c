/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:55:18 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/04 21:15:30 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tofree;

	while (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		tofree = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tofree);
	}
	*begin_list = NULL;
}
