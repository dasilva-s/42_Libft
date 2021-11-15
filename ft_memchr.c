/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:07:59 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 15:36:34 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int car, size_t n)
{
	unsigned char	*m_str;
	unsigned char	m_car;

	m_str = (unsigned char *) str;
	m_car = (unsigned char) car;
	while (n--)
	{
		if (*m_str == m_car)
			return ((void *) m_str);
		m_str++;
	}
	return (NULL);
}
