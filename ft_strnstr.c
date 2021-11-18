/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:12:15 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 11:16:23 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr( const char *s1, const char *s2, size_t l)
{
	size_t	l_s2;

	l_s2 = ft_strlen(s2);
	if (l_s2 == 0)
		return ((char *)s1);
	while (*s1 && l >= l_s2)
	{
		if (ft_strncmp((char *)s1, (char *)s2, l_s2) == 0)
			return ((char *)s1);
		s1++;
		l--;
	}
	return (NULL);
}
