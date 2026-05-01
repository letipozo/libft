/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:46:19 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/01 13:54:47 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("Hola", "Hola", 4));
	printf("%d\n", ft_strncmp("Hola", "Hola mundo", 4));
	printf("%d\n", ft_strncmp("ab", "ac", 2));
	printf("%d\n", ft_strncmp("Ho", "Hola", 4));
	return (0);
}*/
