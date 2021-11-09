/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 06:18:32 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/08 06:18:32 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) s;
	i = 0;
	while (n != 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
	return (s);
}
