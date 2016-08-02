#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	ft_div_mod(22, 7, 0, 0);
	return(0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b;
	*mod = a % b;
}
