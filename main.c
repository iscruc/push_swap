/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/30 20:03:10 by icruces-         ###   ########.fr       */
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
	nums = (long *)malloc (sizeof(long)* (argc - 1));
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

	//ft_printf("cont: %d\n", *cont);
	return (nums);
}

int main(int argc, char **argv)
{
	t_node *stack_a;
	t_node *stack_b;
	long *values;
	int i = 0;
	//t_node *stack1_1;

	//stack1_1 = (t_node *)malloc(sizeof(t_node *));
	if (argc < 2)
		return 0;
 	values = ft_converter(argc, argv);
	
	while (i < argc - 1)
	{	
		ft_printf("number: %d\n", values[i]);
		i++;
	}

	stack_a = fill_stack(values, argc - 1);
	stack_b = NULL;
	ft_printf("%dnumber:", stack_a);	

	
/* 
	while(values[i])
	{
		stack1->content = values[i];
		stack1->next;
		
		i++;
	} 
	 */
 	/* stack1->content = values[0];
	stack1->next = stack1_1;
	stack1_1->content = values[1];
	stack1_1->next = NULL; */
	//printf("%d %d", stack1->content, stack1_1->content);
	//stack2 = NULL; 

	
	//values = ft_converter(argc, argv);
	return 0;
}
