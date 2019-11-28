/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:54:19 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 20:28:44 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes n zeroed bytes to the string s
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
