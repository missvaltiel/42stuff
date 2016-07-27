/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 23:11:33 by karvin            #+#    #+#             */
/*   Updated: 2016/07/27 00:19:49 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	
	i = 0;
	while (i != '\0')
	{
		ft_putchar(str[ft_strlen(str) - 1]);
		i--;
	}
}

int		ft_strlen(char *str)
{
	int	i;
	
	i = 0;

	while (i != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strrev(char *str)
{
	char	*str2[ft_strlen(str)];
	int		i;
	int		j;

	j = ft_strlen(str) - 1;
	i = 0;
	while (i != '\0')
	{
		*str2[i] = str[j];
		i++;
		j--;
	}
	return (str);
}

int		main()
{
	char	str1[] = "Hello";
	ft_strrev(str1);
	ft_putstr(str1[]);
	return (0);
}
