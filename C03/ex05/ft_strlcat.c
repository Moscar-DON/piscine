/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:09:25 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/23 15:25:23 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_lenght(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	len_dest;
	unsigned int	len_src;

	x = ft_lenght(dest);
	y = 0;
	len_dest = ft_lenght(dest);
	len_src = ft_lenght(src);
	if (size != 0)
	{
		while (src[y] != '\0' && (x < size - 1))
		{
			dest[x] = src[y];
			x++;
			y++;
		}
		dest[x] = '\0';
		if (size > x)
			return (len_dest + len_src);
		if (size <= x || size == 0)
			return (size + len_src);
	}
	return (size + len_src);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char    a[20] = "hola ";
	char    b[20] = "mundo";
	unsigned int	x;
	x = strlcat(a, b, 8);
	printf("%i\n", x);
	printf("%s\n", a);


	printf("--------------------\n");	

	char    c[20] = "hola ";
	char    d[20] = "mundo";
	unsigned int	y;
	y = ft_strlcat(c, d, 8);
	printf("%i\n", y);
	printf("%s\n", c);
	return (0);
}
