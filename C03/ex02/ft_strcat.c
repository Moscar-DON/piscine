/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:51:28 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/21 12:27:22 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	a[20] = "hola ";
	char	b[20] = "mundo";
	char	c[20] = "hola ";
	char	d[20] = "mundo";
	
	printf("%s\n", strcat(a, b));
	printf("%s\n", ft_strcat(c, d));
	return (0);
}*/