/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 20:56:05 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:43:54 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value "\0"
*/

void	ft_strclr(char *s)
{
	int	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	while (len >= 0)
	{
		s[len] = '\0';
		len--;
	}
}
