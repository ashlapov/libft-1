/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:15:48 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:13:03 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lower case to upper case letter conversion
*/

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
