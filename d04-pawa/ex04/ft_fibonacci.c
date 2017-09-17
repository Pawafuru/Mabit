/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 12:26:48 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/17 09:19:42 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int res;

	if (index < 0)
		return (res = -1);
	if (index == 0)
		return (res = 0);
	if (index == 1)
		return (res = 1);
	else
		return (res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
