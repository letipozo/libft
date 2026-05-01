/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:32:05 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 15:46:21 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("'a': %d (esperado: 1)\n", ft_isalnum('a'));
	printf("'Z': %d (esperado: 1)\n", ft_isalnum('Z'));
	printf("'5': %d (esperado: 1)\n", ft_isalnum('5'));
	printf("'@': %d (esperado: 0)\n", ft_isalnum('@'));
	printf("' ': %d (esperado: 0)\n", ft_isalnum(' '));
	return (0);
}*/
