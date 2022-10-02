/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:47:33 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/22 16:04:11 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	while (to_find[0] == '\0' )
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y] && str[x + y] != 0)
		{
			if (to_find[y + 1] == '\0')
			{
				return (&str[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char    a[] = "sheshel";
	char    b[] = "el";

	printf("%s\n", strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
	return (0);
}*/
