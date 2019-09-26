/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 09:21:26 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/26 10:16:05 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
			result = (char *)&haystack[i];
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j+1] == '\0')
				return (result);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
