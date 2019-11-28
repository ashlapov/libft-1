/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:37:58 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:08:40 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locate a substring in a string
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		len;
	char	*result;

	result = (char *)haystack;
	len = ft_strlen(needle);
	if (!len)
		return ((char *)result);
	while (*result)
	{
		if (*result == *needle)
			if (ft_strncmp(needle, result, len) == 0)
				return (result);
		result++;
	}
	return (NULL);
}
