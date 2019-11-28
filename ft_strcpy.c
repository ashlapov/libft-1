/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:42:35 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:46:50 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy strings
*/

char	*ft_strcpy(char *dst, const char *src)
{
	return (ft_memcpy(dst, src, ft_strlen(src) + 1));
}
