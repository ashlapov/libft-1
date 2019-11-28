/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:35:57 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:04:09 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as
** a parameter, then frees the link’s memory using free(3)
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = 0;
	}
}
