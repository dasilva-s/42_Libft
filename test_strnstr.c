/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-alm <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:12:15 by stde-alm          #+#    #+#             */
/*   Updated: 2021/11/18 11:11:57 by stde-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include"ft_strlen.c"
#include"ft_strncmp.c"
#include"ft_strnstr2.c"

char	*ft_strnstr( const char *s1, const char *s2, size_t l)
{
	size_t l_s2;

	l_s2 = ft_strlen(s2);

	if (l_s2 == 0)
		return ((char *)s1);
	while (*s1 && l >= l_s2 )
	{
		//if (l - l_s2 < 0)
		//		break;
		if (ft_strncmp((char *)s1, (char *)s2, l_s2) == 0)
			return((char *)s1);
	s1++;
	l--;	
	}
	return (NULL);
}

int	main(void)
{
	char	a[50] = "AAAAAAAAAAAAA";
	char	b[20];
	int		l =ft_strlen(a);
	char	*c;

	char	d[50] = "MZIRIBMZIRIBMZE123";
	char	e[20] = "MZIRIBMZE";
	int		ll = ft_strlen(e);

	//c = ft_strnstr(a, a, l);
	printf("%s \n", ft_strnstr(a, a, l));
	printf("%s \n", ft_strnstr2(a, a, l));
	printf("%s \n \n", strnstr(a, a, l));

	printf("%s \n", ft_strnstr(d, e, ll));
	printf("%s \n", ft_strnstr2(d, e, ll));
	printf("%s \n \n", strnstr(d, e, ll));
}