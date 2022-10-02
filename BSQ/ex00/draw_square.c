/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:47:45 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 15:47:54 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbsq.h"

void	draw_square(struct s_map map_pak)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_pak.y)
	{
		j = 0 ;
		while (j < map_pak.x)
		{
			write (1, &map_pak.map[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}
