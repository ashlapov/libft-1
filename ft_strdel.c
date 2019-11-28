/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 21:01:33 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:49:16 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address
** of a string that need to be freed
*/

void	ft_strdel(char **as)
{
	if (!as)
		return ;
	ft_memdel((void **)as);
}
