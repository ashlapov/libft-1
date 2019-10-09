/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:36:59 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/08 20:41:25 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	if (ft_strlen(s) < maxlen)
		return (ft_strlen(s));
	return (maxlen);
}
