/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:58:05 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/01 14:46:09 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int i;
	int n;

	i = 48;
	n = 57;
	while (i <= n)
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
