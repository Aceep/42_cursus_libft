/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:43:13 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/09 14:41:18 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*nbr;
	long long int	i;
	size_t			size;

	i = n;	
	if (i < 0)
	{
		i = -i;
		size = 1;
	}
	while (n)
	{
		n /= 10;
		size ++;
	}
	nbr = (char *)malloc(sizeof(char) * (size + 1));
	if (!(nbr))
		return (0);
	nbr[size--] = '\0';
	while (i)
	{
		nbr[size --] = (i % 10) + '0';
		i /= 10;
	}
	if (nbr[1] != '\0' && size == 0)
		nbr[0] = '-';
	else if (nbr[1] == '\0' && size == 0)
		nbr[0] = '0';
	return (nbr);
}
