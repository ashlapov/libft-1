/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:47:11 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/10/06 21:03:38 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;

	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	while (len - 1 >= 0)
	{
		result[len - 1] = f(len - 1, s[len - 1]);
		len--;
	}
	return (result);
}
