/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 01:48:34 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/27 04:33:06 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if ((unsigned char *)dst > (unsigned char *)src)
	{
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	str[] = "hola!";

	printf("antes: %s\n", str);
	ft_memmove(str + 1, str, 4);
	printf("despues: %s\n", str);
	return (0);
}*/
