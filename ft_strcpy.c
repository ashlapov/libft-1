/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:42:35 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/17 18:25:43 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dst[--len] = '\0';
	while (len >= 0)
	{
		dst[len] = src[len];
		len--;
	}
	return (dst);
}
