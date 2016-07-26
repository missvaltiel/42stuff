/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 08:18:47 by kdavis            #+#    #+#             */
/*   Updated: 2016/07/24 08:18:52 by kdavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int **puzzle;
	int *row;
	int y;
	int x;

	y = 1;
	x = 0;
	if (argc != 10 )
	{
		write(1,"Error\n", 6);
		return(0);
	}
	puzzle = (int **)malloc(sizeof(*int) * 10);
	while (y < 10)
	{
		row = (int *)malloc(sizeof(int) * 10);
		while (x < 9)
			row[x++] = argv[y][x++];
		puzzle[y - 1] = row;
		y++;
	}
	count_duku(puzzle);
	return (0);
}