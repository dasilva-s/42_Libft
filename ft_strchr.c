/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:39:35 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 15:21:16 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int car)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == car)
			return (&((char *) str)[i]);
		i++;
	}
	if (str[i] == car)
		return (&((char *) str)[i]);
	return (NULL);
}
