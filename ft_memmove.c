/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 09:07:37 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:34:45 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy byte string
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstc;

	i = 0;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc == NULL && dstc == NULL)
		return (NULL);
	if (srcc < dstc)
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	else
		while (i < len)
		{
			*(dstc + i) = *(srcc + i);
			i++;
		}
	return (dst);
}
