/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 03:11:16 by karvin            #+#    #+#             */
/*   Updated: 2016/07/21 15:04:17 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Dynamically allocate memory.


// The idea is to define as a pointer, a variable whose size hasn't been defined yet
// that will just contain the address of a memory area. That will ask the system to //provide us with it.

#include <stdlib.h>

#define	LEN		42

// We make the string size vary by using "define" that "LEN" and define it as 42    bytes for now.

int		main()
{
	int		index;
//Scan character string (and fill it with random charadcters.
	char	*str;
//Declare variable str that is a pointer of type char* (We are defining a pointer,  not a fixed sized string.

	str = i(char*)malloc(sizeof(*str) * (LEN + 1));
//1. Use malloc system call to which we will pass the size that we wish to allocate
//2.Take care of size passed to malloc. The idea is to ask a malloc of 42. Our      string has a size of 42.
	index = 0;
// This is the start for the 'random characters'
	while (index < LEN)
		{
			str[index] = '0' + (index % 10);
//This is going to print 0 1 2 3 4 5 6 7 8 9
			index = index + 1;
		}
	return (0);
}
