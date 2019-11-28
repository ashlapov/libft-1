/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:56:34 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 20:33:56 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests for any character for which
** isalpha or isdigit is true.
*/

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
