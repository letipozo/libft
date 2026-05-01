/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:42:08 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/30 20:45:49 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		last = (char *)&s[i];
	return (last);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("Hello",'l'));
	printf("%s\n", ft_strrchr("Hello", 'H'));
	if (ft_strrchr("Hello", 'z') == NULL)
		printf("No encontrado\n");
	return (0);
}*/
