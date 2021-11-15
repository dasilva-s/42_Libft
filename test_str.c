/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:05:29 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 15:22:33 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include"ft_strlen.c"

int	main(void)
{
char a[20] = "hello word";
char b[] = "word and";
char c[] = "bon-jour";

printf("%lu \n", strlen(a));
printf("%lu \n\n", ft_strlen(a));
printf("%lu \n", strlen(b));
printf("%lu \n\n", ft_strlen(b));
printf("%lu \n", strlen(c));
printf("%lu \n\n", ft_strlen(c));
}
