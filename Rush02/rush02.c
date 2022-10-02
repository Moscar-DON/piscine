/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: operez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:00:44 by operez-d          #+#    #+#             */
/*   Updated: 2022/07/23 16:01:59 by operez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_check_error(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] > '0' || av[i] < '9')
		{
			write (1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}


#include <fcntl.h>
int	ft_open(char *ptr)
{
	int	fd;
	ssize_t	bytes;

	fd = open("/Users/operez-d/Rush02/numbers.dict.txt", O_RDONLY);
	//printf("%d\n", fd);
	if (fd == -1)
	{
		write(1, "Dict Errora\n", 11);
		return (0);
	}
	bytes = read(fd, ptr, 691);//691 = numero de bytes del archivo
	//printf("%s\n", ptr);
	if (bytes == 0)
	{
		write (1, "Dict Errorb\n", 11);
	}
	close(fd);
	return (0);
}


#include <stdlib.h>
int	ft_atoi(char *av)
{
	int	i;
	int	result;

	i = 0;
	while (av[i] != '\0')
	{
		if(av[i] == 32 || (av[i] >= 9 && av[i] <= 13))
		{
			i++;
		}
		////////////////////////////////////////////////////////
		//  +-
		else
		{
			result = (av[i] - 48) + (result * 10);
			i++;
		}
	}
	return (result);
}

int ft_roller_coaster(char *roller, char *av)
{
	int	i;
	int	j;
	int	number;
	int *memory;
	char nose[10];
	//number = (int*)malloc(45 * sizeof(int)); /////////////////////

	i = 0; 
	number = ft_atoi(av);
	memory = (int*)malloc(45 * sizeof(int)); /////////////////////

	printf("%i\n", number);
	while(roller[i] != '\0')
	{
		if ((roller[i] + '0') == number)
		{
			while ((roller[i] < 97 || roller[i] > 122) || (roller[i] < 65 || roller[i] > 90))
			{
				i++;
			}

			j = 0;
			while (roller[i] != '\n')
			{
				nose[j] = roller[i];
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	str[1000];
	ft_open(str);
	if (argc == 2)
	{
		ft_check_error(argv[1]);

		ft_roller_coaster(str, argv[1]);
	}
	if (argc == 3)
	{
		ft_check_error(argv[2]);
	}
}