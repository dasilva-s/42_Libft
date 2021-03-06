/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:54:37 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/30 09:44:33 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spc(const char *strr)
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

int	ft_atoi(const char *str)
{
	int			i;
	long		nb;
	int			neg;

	nb = 0;
	neg = 1;
	i = (ft_spc(str));
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb > 2147483647 && neg == 1)
			return (-1);
		if (nb > 2147483648 && neg == -1)
			return (0);
		i++;
	}
	return ((int)(nb * neg));
}
