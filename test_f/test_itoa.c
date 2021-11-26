/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:22:23 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/26 16:59:04 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_itoa.c"
#include"../ft_calloc.c"
#include"../ft_bzero.c"

int	main(void)
{
	int		n;
	char	*strnb;

	n = -2147483647 -1;
	strnb = ft_itoa(n);
	printf("%d = %s\n", n, strnb);
	free(strnb);
	return (0);
}
