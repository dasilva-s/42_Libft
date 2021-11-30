/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:47:52 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 10:31:35 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr2( const char *s1, const char *s2, size_t l)
{
	int	j;
	int	t;

	j = 0;
	t = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (*s1 && l--)
	{
		if (*s1 == s2[j])
		{
			t = 1;
			while (s2[j] != '\0' && t == 1)
			{
				if (s1[j] != s2[j] || l - j < 0)
				{
					t = 0;
					j = 0;
				}
				j++;
			}
			if (t == 1)
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
