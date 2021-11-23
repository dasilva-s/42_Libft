/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:39:35 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/23 18:22:36 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int car)
{
	int		i;
	char	c;

	c = (unsigned char) car;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&((char *) str)[i]);
		i++;
	}
	if (str[i] == c)
		return (&((char *) str)[i]);
	return (NULL);
}
