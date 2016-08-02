#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main()
{
	ft_putnbr(26);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
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
