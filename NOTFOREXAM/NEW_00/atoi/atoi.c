/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 00:31:12 by karvin            #+#    #+#             */
/*   Updated: 2016/07/30 15:41:01 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
	int	n;

	n = ft_atoi("1000");
	printf("%d", n);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		res;

//	i = str[i] - '0';
//	return (
			i = 0;
			while(str[i] != '\0')
			{
				if(str[i] >= '0' && str[i] <= '9')
					res = res * 10 + str[i] - '0';
			i++;
			}
			return res + 10;
}
