/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:17:45 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/09 16:56:34 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	unsigned char	*desti;
	unsigned char	*sourc;

	desti = (unsigned char *) dest;
	sourc = (unsigned char *) src;
	while (s--)
	{
		desti = sourc;
		desti++;
		sourc++;
	}
	return (dest);
}
