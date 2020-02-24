/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:34:46 by kgavrilo          #+#    #+#             */
/*   Updated: 2020/02/24 14:10:46 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy memory area
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dst == NULL && src == NULL && n)
		return (NULL);
	while (i++ < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
