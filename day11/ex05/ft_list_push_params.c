/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:37:40 by bsingh            #+#    #+#             */
/*   Updated: 2018/07/04 21:10:34 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*new;

	if (ac <= 0)
		return (NULL);
	i = 0;
	new = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = new;
		new = list;
		++i;
	}
	return (list);
}
