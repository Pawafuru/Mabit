/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:58:05 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/01 14:42:41 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	int i;
	int n;

	i = 122;
	n = 97;
	while (i >= n)
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
