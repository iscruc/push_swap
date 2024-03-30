/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/30 13:29:58 by icruces-         ###   ########.fr       */
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
	t_node *stack_a;
	t_node *stack1_1;
	
	// t_node *stack1_1;
	stack_a = (t_node *)malloc(sizeof(t_node *));
	stack1_1 = (t_node *)malloc(sizeof(t_node *));
	// stack1_1=NULL;
	long *values;
	int i;
	
	if (argc < 2)
		return 0;
 	values = ft_converter(argc, argv);
	
	i = 0;
	while(values[i])
	{
		stack_a = ft_add_new_node(values[i]);
		i++;
		ft_printf("%dnumber:", stack_a);	
	}
	
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
	printf("%d %d", stack1->content, stack1_1->content);
	//stack2 = NULL; 

	
	//values = ft_converter(argc, argv);
	return 0;
}
