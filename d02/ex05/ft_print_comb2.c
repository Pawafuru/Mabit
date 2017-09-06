/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 18:41:49 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/05 10:39:02 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(int a1, int b1, int a2, int b2)
{
	int coma;
	int spc;

	coma = 44;
	spc = 32;
	if (((a1 <= a2) && (b1 <= b2)) && ((a1 + b1) < (a2 + b2)))
	{
		ft_putchar(a1);
		ft_putchar(b1);
		ft_putchar(spc);
		ft_putchar(a2);
		ft_putchar(b2);
		if (!((a1 == 57) && (b1 == 56) && (a2 == 57) && (b2 == 57)))
		{
			ft_putchar(coma);
			ft_putchar(spc);
		}
	}
}

void	ft_print_comb2(void)
{
	int a1;
	int b1;
	int a2;
	int b2;

	a1 = 48;
	b1 = 48;
	a2 = 48;
	b2 = 49;
	while (a1 <= 57)
	{
		while (b1 <= 56)
		{
			while (a2 <= 57)
			{
				while (b2 <= 57)
				{
					ft_print(a1, b1, a2, b2);
					b2++;
;				}
				b2 = 48;
				a2++;
			}
			a2 = 48;
			b1++;
		}
		b1 = 48;
		a1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
