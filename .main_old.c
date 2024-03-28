/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 15:14:34 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*  static void print_matrix(char **matrix)
{
	for (int i = 0; matrix[i] != NULL; i++) 
	{ // Asume que NULL marca el final de la matriz.
        ft_printf("%s\n", matrix[i]);
	}
}  */

void ft_converter(char *str)
{
	int i;
	int nums;

	i = 0;
	nums = 0;
	/* while(str[i])
	{
		str = ft_split(str[i++], ' ');
			//print_matrix(str);
	} */
	while(str[i])
	{
		if (new_errors_check(str) != 1)
			nums = ft_atol(str);
		ft_printf("%d\n", nums);
			//print_matrix(str);
		if (nums > INT_MAX || nums < INT_MIN)
			exit_error();
		i++;
	}
/* 	if (check_duplicates(nums, argc) != 1)
		exit_error(); */
}

int main(int argc, char **argv)
{
	int i;
	char **values;
	int j;
	
	i = 1;
	j=0;
	if (argc < 2)
		return 0;
/* 	else if (argc == 2 && ((argv[1][0] == '-' || argv[1][0] == '+') && \
        argv[1][1] == '\0')) //pending to be fixed (currently getting extra error message when writen 1 number)
		exit_error(); */
	
	while(argv[i])
	{
		values = ft_split(argv[i++], ' ');
			//print_matrix(str);
		ft_printf("%s, salida del split",str);
		while(str[j])
		{
			ft_converter(str[j++]);
			j++;
		}
	}
	return 0;
}
