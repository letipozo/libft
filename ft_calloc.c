/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpozo-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:10:12 by lpozo-mo          #+#    #+#             */
/*   Updated: 2026/05/03 22:53:36 by lpozo-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	int	*nums;
	char	*str;

	nums = ft_calloc(5, sizeof(int));
	printf("%d %d %d\n", nums[0], nums[2], nums[4]);
	free(nums);
	str = ft_calloc(6, sizeof(char));
	str[0] = 'H';
	str[1] = 'o';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = '!';
	printf("%s\n", str);
	free(str);
	return (0);
}*/
