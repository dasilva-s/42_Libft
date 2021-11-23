/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:47:52 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/16 12:49:51 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"stdlib.h"
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

char	*ft_strnstr( const char *s1, const char *s2, size_t l)
{
	int	j;
	int	t;

	j = 0;
	t = 0;
	if (strlen(s2) == 0)
		return ((char *)s1);
	while (*s1 && l--)
	{
		if (*s1 == s2[j])
		{
			t = 1;
			while (s2[j] != '\0' && t == 1)
			{
				if (s1[j] != s2[j] || l - j < 0)
				{
					t = 0;
					j = 0;
				}
				j++;
			}
			if (t == 1)
				return ((char *)s1);
		}
		s1++;
	}
	return (NULL);
}

int	main(void)
{
	char	a[50] = "AAAAAAAAAAAAA";
	char	b[20];
	int		l =0;
	char	*c;

	char	d[50] = "MZIRIBMZIRIBMZE123";
	char	e[20] = "MZIRIBMZE";
	int		ll = strlen(e);

	//c = ft_strnstr(a, a, l);
	printf("%s \n", ft_strnstr(a, b, l));
	//printf("%s \n \n", strnstr(a, b, l));

	printf("%s \n", ft_strnstr(d, e, ll));
	//printf("%s \n \n", strnstr(d, e, ll));
}