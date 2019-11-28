/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:28:31 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:35:17 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill a byte string with a byte value
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ret;

	ret = (unsigned char *)b;
	c = (unsigned char)c;
	while (len--)
	{
		*ret = c;
		ret++;
	}
	return (b);
}
