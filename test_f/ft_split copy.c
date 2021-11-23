/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:03:11 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/23 16:18:05 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_nbmot(char const *str, char c);
/*static size_t	ft_nbcarmot(char const *str, char c);*/

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	tmp;
	size_t	word;
	size_t	w;
	char	**rte;

	if (!s || !c)
		return (0);
	i = 0;
	w = 0;
	word = ft_nbmot(s, c) + 1;
	rte = ft_calloc(word, sizeof(**rte));
	while (s[i] && rte)
	{
		while (s[i] == c && s[i])
			i++;
		tmp = i;
		while (s[i] != c && s[i])
			i++;
		if (i != tmp)
		{
			rte[w++] = ft_substr(s, tmp, i - tmp);
		}
	}
	return (rte);
}

static size_t	ft_nbmot(char const *str, char c)
{
	size_t	i;
	size_t	m;

	m = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			m++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (m);
}
/*
static size_t	ft_nbcarmot(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
*/