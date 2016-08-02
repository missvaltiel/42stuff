/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 15:23:16 by karvin            #+#    #+#             */
/*   Updated: 2016/07/26 16:21:12 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_swap(char *a, char *b);

int		main(void)
{
	ft_strrev("hello");
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str || !*str)
		return(0);
	while (str[i])
	{
		++i;
	}
	return(i);
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*ft_strrev(char *str)
{
	int		pos;
	int		ind;
	char	buff[ft_strlen(str)];

	pos = 0;
	ind = 0;
	if (!str || !*str)
		return (str);
	while (str[ind] != '\0')
	{
		buff[ind] = str[ind];
		++ind;
	}
	pos = ind - 1;
	ind = 0;
	while (ind != pos + 1)
	{
		str[ind] = buff[pos - ind];
		++ind;
	}
	return (str);
}
