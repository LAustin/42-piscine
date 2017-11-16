#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%i\n", ft_is_prime(13));
	printf("%i\n", ft_is_prime(0));
	printf("%i\n", ft_is_prime(1));
	printf("%i\n", ft_is_prime(4));
	printf("%i\n", ft_is_prime(2147483423));
	printf("%i\n", ft_is_prime(2147483425));
	printf("%i\n", ft_is_prime(2147483647));
}
