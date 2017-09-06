/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:58:05 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/01 14:49:58 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	int pos;
	int neg;

	pos = 80;
	neg = 78;
	if (n >= 0)
	{
		ft_putchar(pos);
	}
	else
	{
		ft_putchar(neg);
	}
}

int		main(void)
{
	ft_is_negative(-282);
	return (0);
}
