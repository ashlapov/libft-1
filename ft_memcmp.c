/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 10:54:31 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:28:01 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare byte string
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (n > 0)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
