/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:00:11 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/07 02:00:11 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

void * ft_memset(void * s, int c, size_t n)
{
	unsigned char car;
	unsigned char *str;
	int i;

	car = (unsigned char) c;
	str = (unsigned char *) s;
	i = 0;

	while (n != 0)
	{
		str[i] = car;
		i++;
		n--;
	}
	return(s);
}

int main (void)
{
	char text[10] = "hello";
	char text2[10] = "hello";

	memset(text + 1, '0', 3 * sizeof(char));
	ft_memset(text2 + 1, '0', 3 * sizeof(char));
	printf("memset = %s\n", text);
	printf("ft_memset = %s\n", text2);

	return(0);
}