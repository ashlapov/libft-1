/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:40:47 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 21:57:35 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string
** given as argument to create a "fresh" new string
** resulting from the successive applications of f.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
