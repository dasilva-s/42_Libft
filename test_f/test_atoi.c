/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:32:21 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/29 20:46:01 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_atoi.c"

int	main(void)
{
	int ia;
	int ift;
	char nb[] = "3147483649";
	int max = INT_MAX;
	int min = INT_MIN;
	
	ia = atoi(nb);
	ift = ft_atoi(nb);
	
	printf("\nft_atoi = %d\n", ift);
	printf("atoi = %d\n", ia);
	printf("char = %s\n\n", nb);
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	return (0);
}