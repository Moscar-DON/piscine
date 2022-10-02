/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:28:52 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/21 16:47:08 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < nb && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	 main(void)
{
	char    a[20] = "hola ";
	char    b[20] = "mundo";
	char    c[20] = "hola ";
	char    d[20] = "mundo";

	printf("%s\n", strncat(a, b, 1));
	printf("%s\n", "---------------");
	printf("%s\n", ft_strncat(c, d, 1));
	return (0);
}*/
