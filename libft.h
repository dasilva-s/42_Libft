/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:20:55 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 15:09:55 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<string.h>

int		ft_isalpha(int car);
int		ft_isdigit(int car);
int		ft_isalnum(int car);
int		ft_isascii(int c);
int		ft_isprint(int car);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t s);
void	*ft_memmove(void *dest, const void *src, size_t s);
size_t	ft_strlcat(char *dst, const char *src, size_t s);
size_t	ft_strlcpy(char *dst, const char *src, size_t sdst);
int		ft_toupper(int car);
int		ft_tolower(int car);
char	*ft_strchr(const char *str, int car);
char	*ft_strrchr(const char *str, int car);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(const void *str, int car, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t i);
char	*ft_strnstr( const char *s1, const char *s2, size_t l);
int		ft_atoi(char *str);
void	*ft_calloc(size_t l_count, size_t l_size);
char	*strdup(const char *src);

#endif