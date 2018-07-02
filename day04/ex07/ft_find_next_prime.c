/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 15:53:56 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/23 18:24:56 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int b;

	b = 2;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	while (b <= nb / 2)
	{
		if (nb % b == 0)
			return (ft_find_next_prime(nb + 1));
		b++;
	}
	return (nb);
}
