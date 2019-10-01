/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:58:49 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/30 14:03:38 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *)malloc(sizeof(char) * (len - start));
	if (result == NULL)
		return (NULL);
	while (start < len)
	{
		result[start] = s[start];
		start++;
	}
	return (result);
}
