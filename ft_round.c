/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:35:04 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/12/04 12:46:57 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Round to integral value, regardless of rounding direction
*/

int	ft_round(double number)
{
	return (number >= 0) ? (int)(number + 0.5) : (int)(number - 0.5);
}
