/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 20:07:54 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/28 20:59:10 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int a;

	a = hour + 1;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12)
		printf("%d", hour - 12);
	else if (hour == 0)
		printf("%d", hour + 12);
	else
		printf("%d", hour);
	printf("%s", ".00");
	if (hour >= 12)
		printf("%s", " P.M. AND ");
	else
		printf("%s", " A.M. AND ");
	if (hour >= 12)
		printf("%d", a - 12);
	else
		printf("%d", a);
	printf("%s", ".00");
	if (a >= 12 && a < 24)
		printf("%s", " P.M. ");
	else
		printf("%s", " A.M. ");
	printf("%s", "\n");
}
