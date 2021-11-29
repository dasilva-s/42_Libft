/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:54:37 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/29 20:13:52 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (nb > INT_MAX)
			return (-1);
		else if (nb < -2147483648)
			return (1);
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if ((neg % 2) != 0)
		nb = nb * -1;
	return (((int)nb));
}
