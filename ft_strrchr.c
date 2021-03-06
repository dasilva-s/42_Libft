/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:39:35 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/23 18:36:06 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int car)
{
	int		i;
	char	c;

	c = (char) car;
	i = ft_strlen (str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&((char *) str)[i]);
		i--;
	}
	return (NULL);
}
