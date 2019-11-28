/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 21:12:21 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:02:30 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a "fresh" string ending with "\0".
** Each character of the string is initialized at "\0"
*/

char	*ft_strnew(size_t size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * size + 1);
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	while (size--)
		result[size] = '\0';
	return (result);
}
