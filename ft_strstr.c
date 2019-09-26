/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:37:58 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/25 07:28:57 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	//int		res;
	char	*result;

	i = 0;
	// find first letter
	// try to find needle

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
			result = (char *)&haystack[i];
		while (haystack[i] == needle[j])
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

#include <stdio.h>

int		main(void)
{
	char	needle[4] = "hool";
	char	haystack[21] = "hello from school 42";
	printf("%s\n", ft_strstr(haystack, needle));
	return(0);
}
