/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 09:21:26 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/08 18:16:18 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;
	char	*result;

	result = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)result);
	while (*result && len-- >= needle_len)
	{
		if (*result == *needle)
			if (ft_strncmp(needle, result, needle_len) == 0)
				return (result);
		result++;
	}
	return (NULL);
}
