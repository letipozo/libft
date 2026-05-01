/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:27:31 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 14:37:40 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	printf("Longitud de 'Hola': %zu\n", ft_strlen("Hola"));
	printf("Longitud de '42': %zu\n", ft_strlen("42"));
	printf("Longitud de '': %zu\n", ft_strlen(""));
	return (0);
}*/
