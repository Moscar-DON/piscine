/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:39:08 by samartin          #+#    #+#             */
/*   Updated: 2022/07/27 16:01:13 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbsq.h"

int	try_square(struct s_map *map_pak, int starty, int startx)
{
	int	vrtx;
	int	vrty;
	int	i;
	int	sd;

	sd = 1;
	vrty = starty;
	vrtx = startx;
	while (++vrty < map_pak->y && ++vrtx < map_pak->x)
	{
		i = starty - 1;
		while (++i <= vrty)
		{
			if (map_pak->map[i][vrtx] != map_pak->clear_sg)
				return (sd);
		}
		i = startx - 1;
		while (++i <= vrtx)
		{
			if (map_pak->map[vrty][i] != map_pak->clear_sg)
				return (sd);
		}
		sd++;
	}
	return (sd);
}
