/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:01:55 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/25 20:08:13 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int check_duplicates(int *str, int len)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(i < len)
	{
		j = i + 1;
		while(j < len)
		{
			if (str[j] == str[i])
				return(0);
			j++;
		}
		i++;
	}
	return (1);
}

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