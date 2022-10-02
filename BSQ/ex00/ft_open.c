/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:48:07 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 15:51:32 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include "libbsq.h"

int	ft_open(char *str, char *av)
{
	int		file;
	ssize_t	bytes;

	file = open(av, O_RDONLY);
	if (file == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	bytes = read(file, str, 1000);
	if (bytes == 0)
	{
		write (1, "Empty File\n", 11);
	}
	close(file);
	return (1);
}
