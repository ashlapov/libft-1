/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:09:36 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:39:19 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the
** standard output followed by a "\n"
*/

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
