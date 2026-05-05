/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 23:57:00 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/05 14:45:10 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if (start >= size)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > size - start)
		len = size - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}
