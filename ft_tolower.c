/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:43:16 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 16:49:04 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	printf("'A': %c (esperado: a)\n", ft_tolower('A'));
	printf("'Z': %c (esperado: z)\n", ft_tolower('Z'));
	printf("'a': %c (esperado: a)\n", ft_tolower('a'));
	printf("'5': %c (esperado: 5)\n", ft_tolower('5'));
	printf("'@': %c (esperado: @)\n", ft_tolower('@'));
	return (0);
}*/
