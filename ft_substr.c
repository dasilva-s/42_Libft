/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:14:16 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/29 16:24:07 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;

	i = 0;
	if (!src)
		return (NULL);
	if (len > (size_t) ft_strlen(src))
		len = (size_t)ft_strlen(src);
	dest = ft_calloc(len + 1, sizeof(*dest));
	if (!dest)
		return (NULL);
	if (start < ft_strlen(src))
	{
		while (dest[i] || i < len)
		{
			dest[i] = src[start];
			i++;
			start++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
