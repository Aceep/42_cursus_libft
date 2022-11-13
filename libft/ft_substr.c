/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alycgaut <alycgaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:57:54 by alycgaut          #+#    #+#             */
/*   Updated: 2022/11/10 11:43:30 by alycgaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(sizeof (char) * (len + 1));
	if (!s || !(dst))
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		dst[i] = s[start];
		i ++;
		start ++;
	}
	dst[i] = '\0';
	return (dst);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	substrlen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > (slen - start))
		substrlen = slen - start;
	else if (start > slen)
		substrlen = 0;
	else
		substrlen = len;
	str = (char *)(malloc(sizeof(*str) * (substrlen + 1)));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, (substrlen + 1));
	return (str);
}