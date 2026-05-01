/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:42:44 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 15:13:56 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("'a': %d (esperado: 1)\n", ft_isalpha('a'));
	printf("'Z': %d (esperado: 1)\n", ft_isalpha('Z'));
	printf("'5': %d (esperado: 0)\n", ft_isalpha('5'));
	printf("' ': %d (esperado: 0)\n", ft_isalpha(' '));
	printf("'@': %d (esperado: 0)\n", ft_isalpha('@'));
	return (0);
}*/
