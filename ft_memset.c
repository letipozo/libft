/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:17:13 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/04/30 21:57:39 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[6];
	int	nums[5];
	int	i;

	ft_memset(str, 'A', 5);
	str[5] = '\0';
	printf("str relleno con 'A': [%s] (esperado: AAAAA)\n", str);

	ft_memset(nums, 0, sizeof(nums));
	i = 0;
	while (i < 5)
	{
		printf("nums[%d]: %d (esperado: 0)\n", i, nums[i]);
		i++;
	}
	return (0);
}*/
