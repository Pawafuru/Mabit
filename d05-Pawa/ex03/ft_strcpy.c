/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:39:03 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/17 15:29:45 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;
	
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	if ((src[index] == '\0') && (dest[index] != '\0'))
			dest[index] = '\0';

	return (dest);
}

int		main(void)
{
	char car[] = "tutute";
	char moto[] = "vrom";

	printf("%s \n", ft_strcpy(car, moto));
	return (0);
}
