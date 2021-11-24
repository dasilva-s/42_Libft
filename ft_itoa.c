/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:35:51 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/25 00:00:44 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	nbcount(int n);

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;
	int		m;

	i = 0;
	m = 0;
	if (n < 0)
	{
		n = n * -1;
		m = 1;
	}
	i = nbcount(n) + m;
	nbr = ft_calloc(sizeof(char), (i + 1));
	if (m == 1)
		nbr[0] = '-';
	if (n == 0)
		nbr[i - 1] = '0';
	while (n != 0)
	{
		nbr[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (nbr);
}

static int	nbcount(int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}
