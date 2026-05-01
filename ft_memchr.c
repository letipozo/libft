/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:55:09 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/01 18:09:15 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*result;

	result = ft_memchr("Hola!", 'l', 5);
	printf("%s\n", result);
	result = ft_memchr("Hola!", 'z', 5);
	if (result == NULL)
		printf("No encontrado\n");
	return (0);
}*/
