/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 18:14:39 by icruces-         ###   ########.fr       */
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

int errors_check(char **strs, char **argv, int i, int j)
{
	if(!is_number(strs[j]))
		exit_error();
	if(ft_repeatednumbers(argv, i))
		exit_error();
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
