#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);

int	main()
{
	ft_print_comb();
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
		{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <=9)
			{
			ft_putchar(48 + a);
			ft_putchar(48 + b);
			ft_putchar(48 + c);
				if (!(a == 7 && b == 8 && c == 9))
				{
				ft_putchar(',');
				ft_putchar(' ');
				}
			c++;
			}
		b++;
		}
	a++;
}
}
