#include "libft.h"
#include <stdio.h>
#include <fcntl.h>   // Para open()


void	print_char(unsigned int i, char *c)
{
	printf("pos [%u] char: [%c]\n", i, *c);
}

void	ft_grande(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char	*r;
	int	fd;

	fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
	if (fd < 0)
	{
		close(fd);
		return (1);
	}

	r = ft_strjoin("hola", " leti :3 ");
	printf("%s\n", r);

	printf("[%s]\n", ft_strnstr("leti es bonita", "es", 15));

	ft_putchar_fd('a', fd);
	ft_putendl_fd("\noi", fd);
	ft_putstr_fd("\nhola", fd);
	
	char s[] = "amo a mi novia";

	ft_striteri(s, ft_grande);
	ft_striteri(s, print_char);	

	close(fd);
	return (0);
}


/*	SUBSTR
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
}*/
