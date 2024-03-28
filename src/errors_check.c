/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 17:18:47 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_repeatednumbers(char **str, int pos)
{
	int i;

	i = 0;	
	//printf("pos: %d\n", pos);
	while (i < pos)
	{
		//ft_printf("repeated numbers check %s %s\n", str[i], str[pos]);
		if (ft_strcmp(str[i], str[pos]) == 0)
			return (1);
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
