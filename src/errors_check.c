/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 15:44:11 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_repeatednumbers(char *argv)
{
	int i;
	int j;

	i = 0;	
	while (argv[i])
	{
		j = 1;
		while(argv[j])
		{
			//if (j != i && ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int new_errors_check(char *str)
{
	int i;
	
	i = 1;
	/* while (i < (argc - 1) && is_number(str) == 1)
		i++; */
	if(is_number(str) != 1)
		exit_error();
 	/* if (ft_repeatednumbers(str) != 1)
		exit_error(); */
	return (1);
}

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
void	ft_num_max(long nbr)
{
	if (nbr > INT_MAX || nbr < INT_MIN)
		exit_error();
}
