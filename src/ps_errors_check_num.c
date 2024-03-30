/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 17:52:42 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_integers(char *str)
{
	int i; 

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i+1]))
        exit_error();
	if (str[i] == '+' || str[i] == '-' )
		i++;
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int is_number(char *str)
{
	int i;
	
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (check_integers(str) != 1)
			return(0);
		i++;
	}
	return(1);
}