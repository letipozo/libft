/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 04:34:02 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/27 05:38:30 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

/*int	main(void)
{
	char	dst[6];
	char	dst2[3];

	printf("%zu\n", ft_strlcpy(dst, "Hola!", 6));
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst2, "Hola!", 3));
	printf("%s\n", dst2);
	return (0);
}*/
