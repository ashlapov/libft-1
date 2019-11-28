/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 10:41:23 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:55:36 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Size-bounded string copying and concatenation
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(dst);
	if (dstsize > len)
		ft_strncat(dst, src, (dstsize - len - 1));
	if (dstsize < len)
		return (dstsize + ft_strlen(src));
	return (len + ft_strlen(src));
}
