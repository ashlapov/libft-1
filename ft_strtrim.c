/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:03:59 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/11/27 22:10:48 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a copy of the string without
** whitespaces at the beinning or at the end of the string
*/

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		result[i] = *s++;
	result[i] = '\0';
	return (result);
}
