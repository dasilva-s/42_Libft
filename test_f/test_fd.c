/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:17:27 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/28 17:45:39 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_putchar_fd.c"

int	main(void)
{
	FILE*	fichier;

	fichier = fopen("test.txt", "w+");
	if (fichier == NULL)
		return (0);
	ft_putchar_fd('w', fichier);
}
