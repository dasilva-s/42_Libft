/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:55:08 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/03 11:44:46 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int car)
{
	int r;

	r = 0;
	if (ft_isalpha(car) == 1 || ft_isdigit(car) == 1)
		r = 1;
	return (r);
}