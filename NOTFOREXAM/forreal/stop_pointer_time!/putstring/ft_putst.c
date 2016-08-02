#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main()
{
	ft_putstr("Hello");
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0')
		{
			ft_putchar(str[index]);
			index++;
		}
	ft_putchar('\n');
}
