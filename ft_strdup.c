/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 20:48:11 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/03 22:48:45 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copia;

	len = ft_strlen(s1);
	copia = malloc(len + 1);
	if (copia == NULL)
		return (NULL);
	ft_memcpy(copia, s1, len + 1);
	return (copia);
}

/*{
	size_t	i;
	size_t	j;
	char	*copia;

	i = 0;
	while (s1[i] != '\0')
		i++;
	copia = malloc(i + 1);
	if (copia == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		copia[j] = s1[j];
		j++;
	}
	copia[j] = '\0';
	return (copia);
}*/

/*int	main(void)
{
	char	*result;

	result = ft_strdup("Hola!");
	printf("%s\n", result);
	free(result);
	result = ft_strdup("");
	printf("%d\n", result[0]);
	free(result);
	return (0);
}*/
