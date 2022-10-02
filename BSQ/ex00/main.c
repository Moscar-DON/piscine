/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:56:43 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 16:05:07 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libbsq.h"

int	main(int argc, char **argv)
{
	struct s_map	map_pak;
	char			str_map[1000];
	int				counter;

	counter = 1;
	if (argc == 1)
	{
		if (!(ft_bykey(str_map)))
			return (-1);
		if (!(ft_process_map(str_map, &map_pak)))
			return (-1);
	}
	while (counter < (argc))
	{
		if (!(ft_open(str_map, argv[counter])))
			return (-1);
		if (!(ft_process_map(str_map, &map_pak)))
			return (-1);
		counter++;
	}
}
