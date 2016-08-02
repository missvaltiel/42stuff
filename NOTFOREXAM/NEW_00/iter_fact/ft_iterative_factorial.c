/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 08:12:29 by karvin            #+#    #+#             */
/*   Updated: 2016/07/31 17:52:05 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int		ft_iterative_factorial(int nb)
{
	int i;
	int rs;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	rs = 1;
	while (i <= nb)
	{
		rs *= i;
		i++;
		ft_putnbr(rs);
	}
	return (rs);
}

int		main()
{
	ft_iterative_factorial(5);
	return (0);
}
