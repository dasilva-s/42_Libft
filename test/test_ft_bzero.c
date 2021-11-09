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

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

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

int main (void)
{
	char text10[20] = "hello";
	char text11[20] = "word";
	char text20[20] = "hello";
	char text21[20] = "word";

	memcpy(text10, text11, 3);
	ft_memcpy(text20, text21, 3);
	printf("memset = %s\n", text10);
	printf("ft_memset = %s\n", text20);

	return(0);
}