/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 13:40:30 by karvin            #+#    #+#             */
/*   Updated: 2016/07/25 14:31:32 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(char c);
void	ft_putnbr(int n);

int	main()
{
	ft_print_combn(1);
	return(0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
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

void	ft_print_combn(int n)
{
	n = 0;
	while
	{
		ft_putchar
		n++;
	}
}
