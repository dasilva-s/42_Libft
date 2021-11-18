/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:54:37 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 15:12:53 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(char *str);
static int	ft_spc(char *strr);

static int	ft_spc(char *strr)
{
	int	i;

	i = 0;
	while (strr[i] && (strr[i] == ' ' || strr[i] == '\t' || strr[i] == '\n'
			|| strr[i] == '\v' || strr[i] == '\f' || strr[i] == '\r'))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int			i;
	long int	nb;
	int			neg;

	nb = 0;
	neg = 0;
	i = (ft_spc(str));
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if ((neg % 2) == 0)
		return ((int) nb);
	else
		return (((int)nb) * -1);
}