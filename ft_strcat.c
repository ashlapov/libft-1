/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:35:38 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:42:05 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatenate strings
*/

char	*ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
