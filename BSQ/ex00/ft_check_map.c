/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:21:33 by samartin          #+#    #+#             */
/*   Updated: 2022/07/27 16:24:47 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbsq.h"

int	ft_check_map(char *str_map, struct s_map *map_pak)
{
	int	st_it;
	int	i;
	int	j;

	if (str_map[0] >= '1' && str_map[0] <= '9')
		map_pak->y = (str_map[0] - 48);
	else
		return (0);
	st_it = 0;
	while (str_map[st_it] != '\n')
	{
		if (!(str_map[st_it] >= 32 && str_map[st_it] <= 127) || st_it > 3)
			return (0);
		st_it++;
	}
	map_pak->clear_sg = str_map[1];
	map_pak->obs_sg = str_map[2];
	map_pak->sq_sg = str_map[3];
	st_it++;
	map_pak->x = 0;
	while (str_map[st_it] != '\n')
	{
		st_it++;
		map_pak->x++;
	}
	i = 0;
	st_it -= (map_pak->x + 1);
	while (i < map_pak->y)
	{
		j = 0;
		st_it++;
		while (str_map[st_it] != '\n')
		{
			if (str_map[st_it] == 0 && j == 0)
				return (1);
			else if (str_map[st_it] != map_pak->clear_sg
				&& str_map[st_it] != map_pak->obs_sg)
				return (0);
			else
				map_pak->map[i][j] = str_map[st_it];
			st_it++;
			j++;
		}
		if (j != map_pak->x)
			return (0);
		i++;
	}
	return (1);
}
