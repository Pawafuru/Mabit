/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 11:15:15 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/04 18:41:18 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print(int a, int b, int c, int coma, int spc)
{
	if ((a != b) && (a != c) && (b != c))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (!((a == 55) && (b == 56) && (c == 57)))
		{
			ft_putchar(coma);
			ft_putchar(spc);
		}
	}
}

void	ft_print_comb(void)
{

	int spc;
	int coma;
	int a;
	int b;
	int c;

	a = 48;
	b = 49;
	c = 50;
	spc = 32;
	coma = 44;
	
	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				print(a, b, c , coma, spc);
				c++;
			}
		c = b + 1;
		b++;
		}
	b = a + 1;
	a++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
