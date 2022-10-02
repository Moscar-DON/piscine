/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bykey.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:46:01 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 15:47:39 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libbsq.h"

int	ft_bykey(char *str)
{
	ssize_t	bytes;
	char	line[200];
	int		i;

	write(1, "Input the map Header >>", 23);
	bytes = read(STDIN_FILENO, str, 5);
	if (bytes != 5)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	line[0] = '\0';
	while (line[0] != '\n')
	{
		write(1, "Input the next line, only enter to finish>>", 41);
		bytes = read(STDIN_FILENO, line, 200);
		i = 0;
		while (line[i] != '\n')
			i++;
		line[i + 1] = '\0';
		ft_strcat(str, line);
	}
	return (1);
}
