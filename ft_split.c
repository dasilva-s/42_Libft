/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:03:11 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/22 17:45:39 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	w;
	char	**rte;

	if (!s || !c)
		return (0);
	i = 0;
	w = 0;
	word = ft_nbmot(s, c) + 1;
	rte = malloc((sizeof(**rte) * (word)));
	while (s[i] && w < word)
	{
		rte[i] = ft_substr(s, i, ft_nbcarmot(s + i, c));
		i = ft_nbcarmot(s + i, c);
	}
}

static size_t	ft_nbmot(char const *str, char c)
{
	size_t	i;
	size_t	m;

	m = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			m++;
		i++;
	}
	return (m);
}

static size_t	ft_nbcarmot(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
