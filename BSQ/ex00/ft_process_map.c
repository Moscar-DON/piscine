/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:51:54 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 15:54:26 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libbsq.h"

int	ft_process_map(char *str_map, struct s_map *map_pak)
{
	if (ft_check_map(str_map, map_pak))
	{
		map_pak->bst_fnd_x = 0;
		map_pak->bst_fnd_y = 0;
		map_pak->bst_fnd_sd = 0;
		find_square (map_pak);
		draw_square(*map_pak);
	}
	else
	{
		write (1, "map error\n", 10);
		return (0);
	}
	return (1);
}
