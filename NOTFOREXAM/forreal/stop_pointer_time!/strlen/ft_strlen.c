#include <unistd.h>

int	ft_strlen(char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main()
{
	ft_strlen("Hello");
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

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
		{
			len++;
		}
	ft_putnbr(len);
	ft_putchar('\n');
	return(len);
}
