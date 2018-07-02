/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:45:52 by bsingh            #+#    #+#             */
/*   Updated: 2018/06/21 18:42:55 by bsingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a = '0';
	b = '1';
	c = '2';

	while(a <= '9')
	{
		while(b <= '9')
		{
			while(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
			    ft_putchar(c);
				if (!(a == '7' && b == '8' && c == '9')){
				ft_putchar(',');
				ft_putchar(' ');
				c = c + 1;
				}
			}
			b = b +1;
			c = '0';
			c = b + 1;
		}
		a = a + 1;
		b = '0';
		b = a + 1;
		c = '0';
		c = b +1;
	}
}

int main()
{
	ft_print_comb();
	ft_putchar('\n');
}
