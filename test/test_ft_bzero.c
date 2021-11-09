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

int main (void)
{
	char text[10] = "hello";
	char text2[10] = "hello";

	bzero(text + 2, 8);
	ft_bzero(text2 + 2, 8);
	printf("memset = %s\n", text);
	printf("ft_memset = %s\n", text2);

	return(0);
}