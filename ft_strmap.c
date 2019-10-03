/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:40:47 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/03 11:01:35 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		len;

	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	while (len >= 0)
	{
		result[len] = f(s[len]);
	}
	return (result);
}
