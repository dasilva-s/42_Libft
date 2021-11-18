/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:06:23 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 18:42:02 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rte;

	if (!s1 || !set)
		return (0);
	
}

int ft_cherchecar(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
}