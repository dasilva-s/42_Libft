/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:03:11 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/23 16:43:39 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_substr.c"
#include"ft_strlen.c"
#include"ft_strlcpy.c"
#include"ft_split.c"
#include"ft_calloc.c"
#include"ft_bzero.c"

int	main(void)
{
	int	i = 0;
	char	**test;
	char	c = '\0';
	char	str[25] = "\0aa\0bbb";
	
	test =	ft_split(str, c);
	while(test[i])
	{
	printf("%d %s\n", i, *test);
	i++;
	test++;
	}
	return (0);
}