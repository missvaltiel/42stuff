#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main()
{
	ft_swap;
	return(0);
}

void	ft_swap(int *a, int *b)
{
	int 	temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}
