/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:09:00 by karvin            #+#    #+#             */
/*   Updated: 2016/08/01 18:32:26 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

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

void	aff_a(char *str)
{
	while (*str != '\0')
	{
		if(*str == 'a')
		{
			write(1, str, 1);
			ft_putchar('\n');
			break ;
		}
		else
			str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	if (arg
	else
		ft_putstr("a");
	return (0);
}
