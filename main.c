/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/28 19:11:01 by icruces-         ###   ########.fr       */
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
			errors_check(strs, argv, i, j);
			nums[i-1] = ft_atol(strs[j]);
			ft_num_max(nums[i-1]);
			j++;
		}
		ft_free(strs);
		i++;
	}
	return (nums);
}

int main(int argc, char **argv)
{
	/* t_node *stack1;
	t_node *stack2; */
	
	long *values;
	int i;
	
	i = 0;
	if (argc < 2)
		return 0;
 	values = ft_converter(argc, argv);
	/* stack1->content = values; 
	stack2 = NULL; */

	
	//values = ft_converter(argc, argv);
	return 0;
}
