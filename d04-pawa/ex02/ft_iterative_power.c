/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:41:28 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/17 09:23:57 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	if (power <= 0)
		return (0);
	if (power == 1)
		return (nb);
	res = nb * nb;
	while (power > 2)
	{
		res = nb * res;
		power--;
	}
	return (res);
}
