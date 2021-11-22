#include <stdio.h>
#include "ft_isalpha.c"

int	main(int argc, char** argv)
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha('.'));
	return (0);
}
