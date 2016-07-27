/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:20:20 by karvin            #+#    #+#             */
/*   Updated: 2016/07/19 21:59:36 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int index;
	int neg_check;
	int out;

	index = 0;
	neg_check = 1;
	out = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '-' || str[index] == '+')
		{
			if (str[index] == '-')
				neg_check = -1;
			index++;
		}
		if (str[index] < '0' || str[index] > '9')
			return (0);
		else
		{
			out = (out * 10) + (str[index] - '0');
			index++;
		}
	}
	return (neg_check * total);
}

int	main(void)
{
	char s[] = "1000";
	int iv;

	iv = ft_atoi(s);
	printf("%d", iv);
	printf("%s", "\n");
	return (0);
}
