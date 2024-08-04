/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:22:31 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/03 18:35:00 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_node **stack_a, int stack_size, t_node **stack_b)
{
	if(!list_is_sorted(stack_a))
	{
		if (stack_size == 2)
		{	
			make_sa(stack_a);
		}
 		else if (stack_size == 3)
			
			sort_three(stack_a);
		else if (stack_size > 3)
			sort_them_all(stack_a, stack_b);
	}
}
int check_argv_empty(int argc, char** argv)
{
	int i; 
	int j; 
	i = 1;
	
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

long *ft_converter(int argc, char **argv)
{
	int i;
	int j;
	int k;
	char **strs;
	long *nums;
	
	nums = (long *)malloc (sizeof(long)* count_total_values(argc, argv));
	if (!nums)
		return NULL;
	i = 1;
	k = 0;
	while(i < argc)
	{
		strs = ft_split(argv[i], ' ');
		j = 0;
		while(strs[j])
		{
			if (!is_number(strs[j]) || errors_check(strs, argv, i, j))
				exit_error();
			nums[k] = ft_atol(strs[j]);
			ft_num_max(nums[k++]);
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
	int i = 1;
	int num_count = count_total_values(argc, argv);
	
	if (argc < 2)
		exit_error();
	if (check_argv_empty(argc, argv) != 0)
		exit_error();

 	values = ft_converter(argc, argv);
	
 	i = 0;
	while (i < num_count)
	{
		printf ("test values: %ld %d \n", values[i], num_count);
		i++;
	} 
	
	stack_a = fill_stack(values, num_count);
	stack_b = NULL;

	assign_index(stack_a, num_count);
	push_swap(&stack_a, num_count, &stack_b);
	free(values);
	ft_free_stack(&stack_a);
	return 0;
}
