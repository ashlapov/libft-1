/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:42:14 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:06:23 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate locates the last occurrence of c in string
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(s);
	while (str[len] != c && len != 0)
		len--;
	if (str[len] == c)
		return (char *)(&str[len]);
	return (NULL);
}
