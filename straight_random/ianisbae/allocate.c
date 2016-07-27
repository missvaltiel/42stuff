/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 03:02:33 by karvin            #+#    #+#             */
/*   Updated: 2016/07/21 14:21:07 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_strcpy(char *dest, char *src)
{
	if (*src)
	{
		*dest = *src;
		ft_strcpy(++dest, ++src);
	}
	else
		*dest = '\0';
}

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	
	src_len = ft_strlen(src);
	dest = (char *)malloc(src_len + 1);
	ft_strcpy(dest, src);
	return (dest);
}

int		main()
{
	char	*str = "My name is Kimi";
	char	*str2; 

	str2 = ft_strdup(str);
	printf("Original: %s\n", str);
	printf("Output: %s\n", str2);
	return (0);
}
