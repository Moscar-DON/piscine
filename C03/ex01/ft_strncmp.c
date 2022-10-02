/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:18:34 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/26 15:22:02 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
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

#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	x;
	char	a[] = "hola";
	char	b[] = "mundo";
	char	c[] = "hola";
	char	d[] = "mundo";

	x = strncmp(a, b, 5);
	printf("%i\n", x);

	x = ft_strncmp(c, d, 5);
	printf("%i", x);
}
