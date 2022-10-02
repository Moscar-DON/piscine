/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:48:31 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/25 12:48:34 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "sq_struct.h"

int ft_open(char *str, char *av)
{
    int file;
    ssize_t bytes;

    file = open(av, O_RDONLY);
    if (file == -1)
	{
		write(1, "Error\n",6);
		return (0);
	}
    bytes = read(file, str, 1000);
    if (bytes == 0)
	{
		write (1, "Empty File\n", 11);
	}
    close(file);
    return(1);
}

void draw_square(struct s_map map_pak)
{
    int i;
    int j;

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

int    try_square(struct s_map *map_pak, int starty, int startx)
{
    int vrtx;
    int vrty;
    int i;
    int j;
    int sd;

    sd = 1;
    vrty = starty + 1;
    vrtx = startx + 1;
    while (vrty < map_pak->y && vrtx < map_pak->x)
    {
        i = starty;
        j = vrtx;
        while (i <= vrty)
        {
            if (map_pak->map[i][j] == map_pak->clear_sg)
                i++;
            else
                return (sd);
        }
        i = vrty;
        j = startx;
        while (j <= vrtx)
        {
            if (map_pak->map[i][j] == map_pak->clear_sg)
                j++;
            else
                return (sd);
        }
        vrty++;
        vrtx++;
        sd++;
    }
    return (sd);
}

void put_square(struct s_map *map_pak)
{
    int i;
    int j;


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

void find_square(struct s_map *map_pak)
{
    int    i;
    int    j;
    int    ij_sq_sd;

    i = 0;
    while (i < map_pak->y)
    {
        j = 0;
        while (j < map_pak->x)
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
            j++;
        }
        i++;
    }
    put_square(map_pak);
}

int ft_check_map(char *str_map, struct s_map *map_pak)
{
	int	st_it;
    int i;
    int j;

	if (str_map[0] >= '0' && str_map[0] <= '9')
		map_pak->y = (str_map[0] - 48);
	else
		return (0);
	st_it = 0;
	while(str_map[st_it] != '\n')
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
		if (str_map[st_it] != map_pak->clear_sg
            && str_map[st_it] != map_pak->obs_sg)
            return (0);
		st_it++;
        map_pak->x++;
	}
    /*
    map_pak->map = malloc(map_pak->y * sizeof(char *));
    j = 0;
    while (j < map_pak->x)
    {
        map_pak->map[j] = malloc(map_pak->x * sizeof(char));
        j++;
    }
    */
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

int main(int argc, char **argv)
{
    struct s_map map_pak;
    char    str_map[1000];
    int     counter;

    counter = 1;
    if (argc == 1)
	{
        //
	}
    while (counter < (argc))
    {
        if (!(ft_open(str_map, argv[counter])))
            return(-1);
        if (ft_check_map(str_map, &map_pak))
        {
            map_pak.bst_fnd_x = 0;
            map_pak.bst_fnd_y = 0;
            map_pak.bst_fnd_sd = 0;
            find_square (&map_pak);
            draw_square(map_pak);
        }
        else 
        {
            write (1, "map error\n", 10);
            return(-1);
        }
        counter++;
    }
    /*
    counter = 0;
    while (counter < map_pak.x)
    {
        free (map_pak.map[counter]);
        counter++;
    }
    free (map_pak.map);*/
}