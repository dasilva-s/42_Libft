/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:55 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/09 15:46:43 by stde-alm         ###   ########.fr       */
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
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t s);


#endif