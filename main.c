/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 15:24:37 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_node **stack_a, int stack_size, t_node **stack_b)
{
	if(!list_is_sorted(stack_a))
	{
		ft_printf("not_sorted\n");
		if (stack_size == 2)
			ft_swap_sa(stack_a);
 		else if (stack_size == 3)
			sort_three(stack_a);
		else if (stack_size > 3)
			sort_them_all(stack_a, stack_b);
	}
}

long *ft_converter(int argc, char **argv)
{
	int i;
	int j;
	char **strs;
	long *nums;

	i = 1;
	nums = (long *)malloc (sizeof(long)* (argc - 1)); //we have to know the total number of numbers that will be added in the array in order for it to work with multiple argcs
	while(i < argc)
	{
		strs = ft_split(argv[i], ' ');
		j = 0;
		while(strs[j])
		{
			errors_check(strs, argv, i, j);
			nums[i - 1] = ft_atol(strs[j]);
			ft_num_max(nums[i - 1]); //we need to add a specific counter for this as well. 
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
	t_node *stack_b;
	long *values;
	//t_node *stack1_1;

	//stack1_1 = (t_node *)malloc(sizeof(t_node *));
	if (argc < 2)
		return 0;
 	values = ft_converter(argc, argv);

	stack_a = fill_stack(values, argc - 1);
	stack_b = NULL;

	assign_index(stack_a, argc);
	//current_position(stack_a, stack_b);
	print_stack(stack_a);
	push_swap(&stack_a, argc - 1, &stack_b);
	
		printf("STACK A final\n");
		print_stack(stack_a);
		printf("STACK B final\n");
		print_stack(stack_b);

/* 	ft_printf("number:%p ", stack_a);	
	
	ft_push(&stack_a, &stack_b);
	ft_printf("stack A:\n");
	print_stack(stack_a);
	ft_printf("stack B:\n");
	print_stack(stack_b); */
	
	free(values);
	ft_free_stack(&stack_a);
	return 0;
}
