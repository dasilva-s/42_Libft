/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:39:20 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/15 10:23:37 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>





int main(void)
{
char a[20] = "hello word";
char b[20] = "word and war";
char c[9] = "dimanche";

printf("%ld \n", strlcpy(a,b,4));
printf("%ld \n", strlcpy(c,a,5));

}
