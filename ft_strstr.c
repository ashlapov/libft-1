/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:37:58 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/03 10:59:21 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
			result = (char *)&haystack[i];
		while (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (result);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
