/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:20:20 by karvin            #+#    #+#             */
/*   Updated: 2016/07/20 13:14:36 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (str[index] < 48 || str[index] > 57)
			return (0);
		else
		{
			out = out * 10 + (str[index] - 48);
			index++;
		}
	}
	return (neg_check * out);
}
