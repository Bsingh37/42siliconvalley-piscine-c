/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 09:39:45 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/23 17:57:30 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	while (nb > 0 || nb < 13)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}