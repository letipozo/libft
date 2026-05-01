/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:18:55 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/25 16:42:35 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	printf("'a': %c (esperado: A)\n", ft_toupper('a'));
	printf("'z': %c (esperado: Z)\n", ft_toupper('z'));
	printf("'A': %c (esperado: A)\n", ft_toupper('A'));
	printf("'5': %c (esperado: 5)\n", ft_toupper('5'));
	printf("'@': %c (esperado: @)\n", ft_toupper('@'));
	return (0);
}*/
