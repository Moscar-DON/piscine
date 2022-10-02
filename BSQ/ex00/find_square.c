/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:11:34 by samartin          #+#    #+#             */
/*   Updated: 2022/07/27 16:15:12 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbsq.h"

void	find_square(struct s_map *map_pak)
{
	int	i;
	int	j;
	int	ij_sq_sd;

	i = -1;
	while (++i < map_pak->y)
	{
		j = -1;
		while (++j < map_pak->x)
		{
			if (map_pak->map[i][j] == map_pak->clear_sg)
			{
				ij_sq_sd = try_square(map_pak, i, j);
				if (ij_sq_sd > map_pak->bst_fnd_sd
					|| (ij_sq_sd == map_pak->bst_fnd_sd
						&& map_pak->bst_fnd_x + map_pak->bst_fnd_y > i + j))
				{
					map_pak->bst_fnd_y = i;
					map_pak->bst_fnd_x = j;
					map_pak->bst_fnd_sd = ij_sq_sd;
				}
			}
		}
	}
	put_square(map_pak);
}
