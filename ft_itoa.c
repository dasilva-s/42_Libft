/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:35:51 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/26 17:02:49 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	nbcount(long int n);
static int	negcount(long int *ln);

char	*ft_itoa(int n)
{
	char		*nbr;
	int			i;
	int			m;
	long int	ln;

	i = 0;
	ln = n;
	m = negcount(&ln);
	i = nbcount(ln) + m;
	nbr = ft_calloc(sizeof(char), (i + 1));
	if (nbr == NULL)
		return (0);
	if (m == 1)
		nbr[0] = '-';
	if (ln == 0)
		nbr[i - 1] = '0';
	while (ln != 0)
	{
		nbr[i - 1] = (ln % 10) + 48;
		ln = ln / 10;
		i--;
	}
	return (nbr);
}

static int	negcount(long int *ln)
{
	int	m;

	m = 0;
	if (*ln < 0)
	{
		*ln = *ln * -1;
		m = 1;
	}
	return (m);
}

static int	nbcount(long int n)
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
