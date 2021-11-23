/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:39:20 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 14:39:38 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include"ft_strlcpy.c"
#include"ft_strlen.c"





int main(void)
{
char a[20] = "hello word";
char b[20] = "and war";
char c[9] = "dimanche";

printf("%ld \n", ft_strlcpy(a,b,4));
printf("%s \n", a);
printf("%ld \n", strlcpy(a,b,4));

}
