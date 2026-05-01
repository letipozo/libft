/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:01:38 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 16:10:53 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("'a': %d (esperado: 1)\n", ft_isprint('a'));
	printf("' ': %d (esperado: 1)\n", ft_isprint(' '));
	printf("'~': %d (esperado: 1)\n", ft_isprint('~'));
	printf("'\\n': %d (esperado: 0)\n", ft_isprint('\n'));
	printf("0: %d (esperado: 0)\n", ft_isprint(0));
	printf("127: %d (esperado: 0)\n", ft_isprint(127));
	return (0);
}*/
