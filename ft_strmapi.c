/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:47:11 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:58:43 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed
** as argument by giving its index as first argument to create a
** "fresh" new string resulting from the successive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	while (len - 1 >= 0)
	{
		result[len - 1] = f(len - 1, s[len - 1]);
		len--;
	}
	return (result);
}
