/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:04:34 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/29 16:39:41 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	l;
	size_t	i;
	char	*rte;

	i = 0;
	l = 0;
	l = ft_strlen(src) + 1;
	rte = malloc(l * sizeof(char));
	if (!rte)
		return (0);
	while (*src)
	{
		rte[i] = *src;
		i++;
		src++;
	}
	rte[i] = '\0';
	return (rte);
}
