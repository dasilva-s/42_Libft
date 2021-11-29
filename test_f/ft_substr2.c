/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:12:44 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/29 16:26:02 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*dst;

	if (!src)
		return (0);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	if (start >= ft_strlen(src))
		*dst = '\0';
	else
		ft_strlcpy(dst, (src + start), (len + 1));
	return (dst);
}
