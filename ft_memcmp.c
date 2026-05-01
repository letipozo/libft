/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 18:09:51 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/01 21:50:03 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	printf("=== ft_memcmp ===\n");
	printf("%d\n", ft_memcmp("Hola", "Hola", 4));
	printf("%d\n", ft_memcmp("Hola", "Holb", 4));
	printf("%d\n", ft_memcmp("Hola", "Holb", 3));
	return (0);
}*/
