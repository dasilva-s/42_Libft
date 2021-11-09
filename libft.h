/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:55 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/03 14:49:20 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT.H__
#define __LIBFT.H__
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_isalpha(int car);
int	ft_isdigit(int car);
int ft_isalnum(int car);
int	ft_isascii(int c);
int	ft_isprint(int car);
size_t	ft_strlen (const char *str);



#endif