/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 21:51:12 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/06 00:04:25 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (i + j < len && big[i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)(&big[i]));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strnstr("Hola mundo", "mundo", 10));
	printf("%s\n", ft_strnstr("Hola mundo", "", 10));
	printf("%s\n", ft_strnstr("Hola mundo", "mundo", 4));
	return (0);
}*/
