#include <unistd.h>
//PRINT N
void	ft_print_comb2(void);
void	ft_putchar(char c);
void	ft_putnbr(int n);

int	main()
{
	ft_print_comb2();
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
void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
while (a < 10)
{
	while(b < 10)
	{
		while (c < 10)
		{
			while (d < 10)
			{
			
				{
					ft_putnbr(a);
					ft_putnbr(b);
					ft_putchar(' ');
					ft_putnbr(c);
					ft_putnbr(d);
					ft_putchar(',');				
				}
				d++;
			}
			d=0;
			c++;
		}
		c=0;
		b++;
	}
	b=0;
	a++;
}
}
