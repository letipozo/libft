#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_substr("Hola mundo", 5, 5);
	printf("%s\n", result);
	free(result);
	result = ft_substr("Hola", 10, 5);
	printf("%s\n", result);
	free(result);
	result = ft_substr("Hola mundo", 5, 100);
	printf("%s\n", result);
	free(result);
	return (0);
}

