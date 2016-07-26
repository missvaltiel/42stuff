/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:33:41 by karvin            #+#    #+#             */
/*   Updated: 2016/07/21 19:23:22 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_generic(void);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (*str)
	{
		ft_putchar(*str);
		ft_putstr(++str);
	}
}

void	ft_generic(void)
{
	ft_putstr("Tu tu tu tu ; Tu tu tu tu\n");
}

int	main()
{
	ft_generic();
	return(0);
}
