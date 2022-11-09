/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:56:19 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/09 11:56:20 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;
	size_t	idx_src;

	i = 0;
	idx_src = 0;
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		ret = size + ft_strlen(src);
	else
		ret = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] != 0)
		i ++;
	while (src[idx_src] != '\0' && i + 1 < size)
	{
		dest[i] = src[idx_src];
		i ++;
		idx_src ++;
	}
	dest[i] = '\0';
	return (ret);
}
