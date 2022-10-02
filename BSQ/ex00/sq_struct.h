/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sq_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:42:02 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 16:42:15 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SQ_STRUCT_H
# define SQ_STRUCT_H

struct s_map
{
	char	map[9][200];
	int		x;
	int		y;
	char	clear_sg;
	char	obs_sg;
	char	sq_sg;
	int		bst_fnd_x;
	int		bst_fnd_y;
	int		bst_fnd_sd;
};
#endif
