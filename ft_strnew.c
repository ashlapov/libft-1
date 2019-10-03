/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 21:12:21 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/03 14:44:18 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	while (size > 0)
	{
		result[size] = '\0';
		size--;
	}
	return (result);
}
