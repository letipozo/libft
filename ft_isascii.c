/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:46:59 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 15:53:34 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("'0': %d (esperado: 1)\n", ft_isascii(0));
	printf("'65': %d (esperado: 1)\n", ft_isascii(65));
	printf("'127': %d (esperado: 1)\n", ft_isascii(127));
	printf("'128': %d (esperado: 0)\n", ft_isascii(128));
	printf("'-1': %d (esperado: 0)\n", ft_isascii(-1));
	return (0);
}*/
