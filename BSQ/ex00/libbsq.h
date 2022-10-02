/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libbsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:08:40 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/27 16:10:10 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBBSQ_H
# define LIBBSQ_H

# include <unistd.h>
# include <fcntl.h>
# include "sq_struct.h"

int		ft_open(char *str, char *av);
void	draw_square(struct s_map map_pak);
int		try_square(struct s_map *map_pak, int starty, int startx);
void	put_square(struct s_map *map_pak);
void	find_square(struct s_map *map_pak);
int		ft_check_map(char *str_map, struct s_map *map_pak);
int		ft_bykey(char *str);
void	ft_strcat(char *dest, char *src);
int		ft_process_map(char *str_map, struct s_map *map_pak);

#endif
