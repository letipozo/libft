/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:27:42 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/30 17:41:27 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	char	*result;

	result = ft_strchr("Hola!", 'l');
	printf("%s\n", result);
	result = ft_strchr("Hola!", 'z');
	if (result == NULL)
		printf("No encontrado\n");
	result = ft_strchr("Hola!", '\0');
	printf("%s\n", result);
	return (0);
}*/
