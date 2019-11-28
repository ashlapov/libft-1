/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:22:57 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:11:58 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Upper case to lower case letter conversion
*/

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
