/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:49:24 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/17 09:30:49 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int res;

	if (nb == 1)
		return (nb);
	if (nb < 1)
		return (0);
	if (nb > 12)
		return (0);
	else
	{
		return (res = nb * ft_recursive_factorial(nb - 1));
	}
}
