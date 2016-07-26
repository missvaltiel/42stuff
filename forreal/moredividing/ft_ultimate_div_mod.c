#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main()
{
	ft_ultimate_div_mod;
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *a;
}
