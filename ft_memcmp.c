/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:13:50 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 16:41:25 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t i)
{
	unsigned char	*m_s1;
	unsigned char	*m_s2;

	m_s1 = (unsigned char *) s1;
	m_s2 = (unsigned char *) s2;
	while (i--)
	{
		if (*m_s1 != *m_s2)
			return (*m_s1 - *m_s2);
		m_s1++;
		m_s2++;
	}
	return (0);
}
