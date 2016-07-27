/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 00:31:12 by karvin            #+#    #+#             */
/*   Updated: 2016/07/27 01:15:18 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
	int	n;

	n = ft_atoi("23518");
	printf("%d", n);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		out;
	
	out = 0;
	neg = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '\n'
				|| str[i] == '\t')
		{
			if (str[i] == '-')
				neg = neg * -1;
			i++;
		}
		if (str[i] > 57 || str[i] < 48)
		{
			return (0);
		}
		else
		{
			out = out * 10 + (str[i] - 48);
			i++;
		}	
	}
	return (neg * out);
}
