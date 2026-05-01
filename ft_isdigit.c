/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:22:20 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 15:31:19 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("'5': %d (esperado: 1)\n", ft_isdigit('5'));
	printf("'0': %d (esperado: 1)\n", ft_isdigit('0'));
	printf("'9': %d (esperado: 1)\n", ft_isdigit('9'));
	printf("'a': %d (esperado: 0)\n", ft_isdigit('a'));
	printf("'@': %d (esperado: 0)\n", ft_isdigit('@'));
	return (0);
}*/
