/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 14:35:17 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/07 20:51:42 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	ret;
	int	negative;

	negative = 1;
	ret = 0;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r' || *str == ' '))
		++str;
	if (negative == 1 && *str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (ret > 469762049 && negative == 1)
			return (-1);
		else if (ret > 469762049 && negative == -1)
			return (0);
		ret = (ret * 10) + *str - '0';
		++str;
	}
	return (ret * negative);
}
