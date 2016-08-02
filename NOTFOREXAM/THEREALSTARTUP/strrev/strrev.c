/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 00:05:38 by karvin            #+#    #+#             */
/*   Updated: 2016/07/31 01:26:24 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_strrev(char *s1)
{
	int		j;
	int		i;
	char	temp;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (i <== length / 2)
	{
		*temp = s1[i];
		s1[i] = str[j - i];
		str[j - i] = *temp;
		i++;
	}
	return(s1);
}

int		main()
{
	char	*str;

	str = "fuck duck muck puck";
	ft_strrev(str);
	ft_putstr(str);
	return(0);
}
