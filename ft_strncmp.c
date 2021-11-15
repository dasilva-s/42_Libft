/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:01:58 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 14:00:23 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > 0)
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i] - s2[i]));
		i++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	text1[] = "salut";
	char	text2[] = "salut";
	int	c = 0;

	printf(" %d \n", strncmp(text1, text2, c));
	printf(" %d \n", ft_strncmp(text1, text2, c));
}*/
