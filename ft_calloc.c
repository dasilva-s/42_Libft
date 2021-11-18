/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:36:01 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 13:52:29 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t l_count, size_t l_size)
{
	void	*ret;
	ret = malloc((l_count * l_size));
	if (!ret)
		return(0);
	ft_bzero(ret, (l_count * l_size));
	return (ret);
}
