/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:40:31 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/12 10:42:18 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t s)
{
	const char	*m_src;
	char		*m_dest;

	m_src = (const char *) src;
	m_dest = (char *) dest;
	if (!dest && !src)
		return (NULL);
	if (m_src < m_dest)
	{
		m_src += s - 1;
		m_dest += s - 1;
		while (s--)
		{
			*m_dest = *m_src;
			m_dest--;
			m_src--;
		}
	}
	else if (m_src > m_dest)
		ft_memcpy(dest, src, s);
	return (dest);
}
