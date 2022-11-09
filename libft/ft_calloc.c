/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:32:26 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/09 13:40:24 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tab;

	tab = (void *)malloc(size * nitems);
	if (!tab)
		return (NULL);
	return (ft_bzero(tab, size * nitems), (void *)tab);
}
