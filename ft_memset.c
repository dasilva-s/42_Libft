/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:00:11 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/07 02:00:11 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	car;
	unsigned char	*str;
	int				i;

	car = (unsigned char) c;
	str = (unsigned char *) s;
	i = 0;
	while (n != 0)
	{
		str[i] = car;
		i++;
		n--;
	}
	return (s);
}
