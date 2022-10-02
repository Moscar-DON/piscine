/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sq_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:05:25 by samartin          #+#    #+#             */
/*   Updated: 2022/07/25 16:49:50 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_map
{
	char map[9][200];
	int x;
	int y;
	char clear_sg;
	char obs_sg;
	char sq_sg;
	int bst_fnd_x;
	int bst_fnd_y;
	int bst_fnd_sd;
};