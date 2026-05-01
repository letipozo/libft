/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:44:58 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/27 00:28:26 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[6];
	int	i;

	str[0] = 'h';
	str[1] = 'o';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = '!';
	str[5] = '\0';
	printf("Antes: %s\n", str);

	ft_bzero(str, 5);
	i = 0;
	while (i < 5)
	{
		printf("str[%d]: %d (esperado: 0)\n", i, str[i]);
		i++;
	}
	return (0);
}*/
