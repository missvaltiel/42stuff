/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 19:10:46 by karvin            #+#    #+#             */
/*   Updated: 2016/07/21 19:18:29 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void);

int	main()
{
	ft_generic();
	return(0);
}

void	ft_generic(void)
{
	char *str;
	write(1, "Tu tu tu tu ; Tu tu tu tu\n", 26);
}
