/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:12:32 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 21:45:11 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_highest_index(t_node *stack)
{
	int aux;
	
	aux = stack->index;
	 	while(stack)
		{
			if (stack->index > aux)
				aux = stack->index;
			stack = stack->next;
		}
	return(aux);
}
void push_all_to_b(t_node **stack_a, t_node **stack_b)
{
	//t_node *temp;
	int size;

	//temp = *stack_a;
	size = stack_size(*stack_a);
	while (size > 3)
	{
		printf("%d\n", size);
		print_stack(*stack_b);
		print_stack(*stack_a);
/* 		char x;
		scanf("%c", &x); */
		ft_push(stack_a, stack_b);
		//temp=temp->next;
		size--;
	}
	printf("out of the while\n");
}

void sort_three(t_node **stack)
{
	int highest;

	highest = find_highest_index(*stack);
	printf("Initial stack:\n ");
	if ((*stack)->index == highest)
	{
		ft_rotate(stack);
	}
	else if ((*stack)->next->index == highest)
	{
		ft_rrotate(stack);
	}
	if ((*stack)->index > (*stack)->next->index)
	{
		ft_swap_sa(stack);
	}
} 

void sort_them_all(t_node **stack_a, t_node **stack_b)
{	
	print_stack(*stack_a);
	print_stack(*stack_b);
	push_all_to_b(stack_a, stack_b);
	
	t_node *temp;
	temp = *stack_b;
	while (temp != NULL)
	{
		printf("inside_while\n");
		assign_position(*stack_a);
		assign_position(*stack_b);
		assign_target(*stack_a, *stack_b);
		temp = (temp)->next;
	} 
	printf("STACK B final\n");
	print_stack(*stack_b);

}
