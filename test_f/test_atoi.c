/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:32:21 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/30 09:29:41 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_atoi.c"
#include"../ft_atoi2.c"
#include"../ft_isdigit.c"

int	main(void)
{
	int ia;
	int ia2;
	int ift;
	char nb[] = "-2147483648";
	int max = INT_MAX;
	int min = INT_MIN;
	
	ia = atoi(nb);
	ia2 = ft_atoi2(nb);
	ift = ft_atoi(nb);
	
	printf("\nft_atoi = %d\n", ift);
	printf("atoi = %d\n", ia);
	printf("ft_atoi2 = %d\n", ia2);
	printf("char = %s\n\n", nb);
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	return (0);
}