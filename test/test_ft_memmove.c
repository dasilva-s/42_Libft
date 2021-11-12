/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 09:40:31 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/12 10:42:00 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_memcpy.c"

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

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main (void)
{
    char text10[20] = "hello";
    char text11[20] = "word";
    char text20[20] = "hello";
    char text21[20] = "word";

    memmove(text10, text11, 3);
    ft_memmove(text20, text21, 3);
    printf("memset = %s\n", text10);
    printf("ft_memset = %s\n", text20);

    return(0);
}
