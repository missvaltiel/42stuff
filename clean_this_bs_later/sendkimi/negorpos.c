/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negorpos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 16:31:15 by karvin            #+#    #+#             */
/*   Updated: 2016/07/20 22:54:11 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
		ft_putchar('\n');
}

int		main()
{	
	int n;

	n = -3;
	ft_is_negative(n);
	return(0);
}
