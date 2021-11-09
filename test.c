/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:19:50 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/03 11:24:35 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>
#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include "ft_isalnum.c"
int main()
{
    char c;
    c = EOF;
    printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

    c = 'a';
    printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));
	
    c='9';
	printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

    c=' ';
	printf("\nResult when uppercase alphabet is passed: %d", isalnum(c));
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));
	
    return 0;
}