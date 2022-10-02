/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:54:01 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/20 21:11:05 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] > s2[x])
		{
			return (s1[x] - s2[x]);
		}
		if (s1[x] < s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	x;
	char	a[] = "hola";
	char	b[] = "mundo";
	char	c[] = "hola";
	char	d[] = "mundo";

	x = strcmp(b, a);
	printf("%i\n", x);

	x = ft_strcmp(d, c);
	printf("%i", x);
}*/