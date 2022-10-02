/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:55:19 by samartin          #+#    #+#             */
/*   Updated: 2022/07/25 15:46:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	unsigned int x = 20;
	unsigned int y = 9;
	float den = 2.0f;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	srand(time(NULL));
	printf ("%d0x=\n", y);
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (((rand() % (y + 1)) * 2) < den)
				printf ("x");
			else
				printf ("0");
			i++;
		}
		printf ("\n");
		j++;
	}
}
