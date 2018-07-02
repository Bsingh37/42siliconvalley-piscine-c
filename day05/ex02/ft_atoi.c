/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:00:01 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/25 14:08:35 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int neg;
	int ans;

	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n')
	{
		str++;
	}
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + *str - '0';
		str++;
	}
	return (ans * neg);
}