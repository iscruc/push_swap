/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 16:37:17 by icruces-         ###   ########.fr       */
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

long *ft_converter(int argc, char **argv)
{
	int i;
	int j;
	char **strs;
	long *nums;

	i = 1;
	nums = (long *)malloc (sizeof(long)* (argc -1));
	while(i < argc)
	{
		strs = ft_split(argv[i], ' ');
		j = 0;
		while(strs[j])
		{
			if(!is_number(strs[j]))
				exit_error();
			nums[i - 1] = ft_atol(strs[j]);
			//ft_printf("%d\n", nums[i - 1]);
			ft_num_max(nums[i - 1]);
			j++;
		}
		i++;
	}
	return (nums);
/* 	if (check_duplicates(nums, argc) != 1)
		exit_error(); */
}

int main(int argc, char **argv)
{
	long *values;
	int i;
	
	i = 0;
	if (argc < 2)
		return 0;
/* 	else if (argc == 2 && ((argv[1][0] == '-' || argv[1][0] == '+') && \
        argv[1][1] == '\0')) //pending to be fixed (currently getting extra error message when writen 1 number)
		exit_error(); */
 	values = ft_converter(argc, argv);
	while (i < argc - 1)
	{
		ft_printf("%d\n", values[i]);
			//print_matrix(str);
		i++;
	}
	
	//values = ft_converter(argc, argv);
	return 0;
}
