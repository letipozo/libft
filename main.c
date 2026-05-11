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

////////////////////////////////////////////

/*	FT_STRTRIM
int	main(void)
{
	char	*result;

	result = ft_strtrim("  Hola mundo ", " ");
	printf("%s\n", result);
	free(result);
	result = ft_strtrim("##Hola#", "#");
	printf("%s\n", result);
	free(result);
	result = ft_strtrim("Hola", "");
	printf("%s\n", result);
	free(result);
	return (0);
}*/

////////////////////////////////////////////

/*	FT_STRITERI
void	toupper_f(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);

}

void	print_f(unsigned int i, char *c)
{
	printf("posicion %u: %c\n", i, *c);
}

int	main(void)
{
	char	str[] = "hola mundo";

	ft_striteri(str, toupper_f);
	ft_striteri(str, print_f);
	return (0);
}*/

//////////////////////////////////////////////

/*	FT_STRMAPI
char	toupper_f(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("hola mundo", toupper_f);
	printf("%s\n", result);
	free(result);
	return (0);
}*/

/////////////////////////////////////////////

/*	FT_PUTNBR_FD
int	main(void)
{
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-5, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	return (0);
}*/

//////////////////////////////////////////////

/*	FT_PUTENDL_FD
int	main(void)
{
	ft_putendl_fd("Hola mundo", 1);
	ft_putendl_fd("Segunda linea", 1);
	return (0);
}*/

////////////////////////////////////////////////

/*	FT_PUTSTR_FD
int	main(void)
{
	ft_putstr_fd("Hola mundo\n", 1);
	ft_putsrt_fd("Error!\n", 2);
	return (0);
}*/

/////////////////////////////////////////////////

/*	FT_PUTCHAR_FD
int	main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/

/////////////////////////////////////////////////

/*	FT_SUBSTR
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
