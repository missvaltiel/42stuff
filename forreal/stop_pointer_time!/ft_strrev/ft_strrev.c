#include <unistd.h>

char	*ft_strrev(char *str);
void	ft_putchar(char c);

int	main()
{
	ft_strrev("hello");
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int	i;
	
	if (i = '\0')
	{
		ft_putchar(str[i]);
		i--;
	}
	return(str);
}
