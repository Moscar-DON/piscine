/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:05:25 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 16:07:30 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libbsq.h"

void	put_square(struct s_map *map_pak)
{
	int	i;
	int	j;

	i = map_pak->bst_fnd_y;
	while (i < (map_pak->bst_fnd_y + map_pak->bst_fnd_sd))
	{
		j = map_pak->bst_fnd_x;
		while (j < (map_pak->bst_fnd_x + map_pak->bst_fnd_sd))
		{
			map_pak->map[i][j] = map_pak->sq_sg;
			j++;
		}
		i++;
	}
}
