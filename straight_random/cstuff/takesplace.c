/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 20:27:19 by karvin            #+#    #+#             */
/*   Updated: 2016/07/21 20:56:25 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_parse_hour(int hour)
{
	if (hour == 0 || hour == 12)
		return (12);
	else if (hour < 12)
		return (hour);
	else
		return (hour - 12);
}

char	*ft_parse_meridian(int hour)
{
	if (hour < 12 || hour == 24)
		return ("A.M.");
	else
		return ("P.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0)
		hour = hour * -1;
	while (hour >= 24)
		hour = hour - 24;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
	ft_parse_hour(hour),
	ft_parse_meridian(hour),
	ft_parse_hour(hour + 1),
	ft_parse_meridian(hour + 1));
}

int		main()
{
	ft_takes_place(23);
	return(0);
}
