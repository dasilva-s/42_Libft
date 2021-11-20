/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:06:23 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/20 16:38:51 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_cherchecar(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rte;
	int		i;
	int		y;

	i = 0;
	if (!s1 || !set)
		return (0);
	y = ft_strlen(s1) - 1;
	while (s1[i] && ft_cherchecar(s1 + i, set) == 1)
		i++;
	while (y > i && ft_cherchecar(s1 + y, set) == 1)
		y--;
	rte = ft_calloc ((y - i) + 2, sizeof(char));
	if (!rte)
		return (0);
	ft_strlcpy(rte, s1 + i, (y - i) + 2);
	return (rte);
}

int	ft_cherchecar(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (*s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main(void)
{
char a[25] = "rtyphello yworpdpyrt";
char b[6] = "rtyp";

ft_strtrim(a, b);
return (0);
}*/