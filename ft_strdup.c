/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:04:34 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 15:16:18 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		l;
	char	*rte;

	l = ft_strlen(src) + 1;
	rte = malloc(l);
	if (!rte)
		return (0);
	ft_strlcpy(rte, src, l);
	return (rte);
}
