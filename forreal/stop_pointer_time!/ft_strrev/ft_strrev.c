#include <unistd.h>

char	*ft_strrev(char *str);
void	ft_putchar(char c);
int	ft_strlen(char *str);
void	ft_putstr(char *str);

int	main()
{
	ft_strrev("hello");
	return(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{	
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void	ft_putstr(char *str)
{
	int ind;

	ind = 0;
	while (ind != '\0')
	{
		ft_putchar(str[ind]);
		ind++;
	}
}

char	*ft_strrev(char *str)
{
	char	*str2;
	int	len;
	int	j;

	j = 0;
	len = ft_strlen(str);
	while (str2[len] = str[j])
	{
		j++;
		len--;
	}
	return(str2);
}
