/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:12:32 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/03 18:06:09 by icruces-         ###   ########.fr       */
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

int find_lowest_pos(t_node *stack)
{
	int min_index;
	int min_pos;
	t_node *stack_aux;
	
	min_pos = stack->pos;
	min_index = stack->index;
	stack_aux = stack;
	 	while(stack_aux)
		{
			if (stack_aux->index < min_index)
			{
				min_index = stack->index;
				min_pos = stack->pos;
			}
			stack_aux = stack_aux->next;
		}
	return(min_pos);
}

void push_all_to_b(t_node **stack_a, t_node **stack_b)
{
	//t_node *temp;
	int size;

	//temp = *stack_a;
	size = stack_size(*stack_a);
	while (size > 3)
	{
		make_pb(stack_a, stack_b);
		size--;
	}
}

void sort_three(t_node **stack)
{
	int highest;

	highest = find_highest_index(*stack);
	if ((*stack)->index == highest)
	{
		make_ra(stack);
	}
	else if ((*stack)->next->index == highest)
	{
		make_rra(stack);
	}
	if ((*stack)->index > (*stack)->next->index)
	{
		make_sa(stack);
	}
} 
/* void excecute_sequence(t_node **stack_a, t_node **stack_b)
{
	t_node *temp_stack_b;
	
	temp_stack_b = *stack_b;
	while(temp_stack_b->cost_a > 0)
	{
		ra(stack_a);
		temp_stack_b->cost_a--;
	}
	while(temp_stack_b->cost_a < 0)
	{
		rra(stack_a);
		temp_stack_b->cost_a++;
	}
	
	
} */

void sort_them_all(t_node **stack_a, t_node **stack_b)
{	
	//print_stack(*stack_a);
	//print_stack(*stack_b);
	push_all_to_b(stack_a, stack_b);
	sort_three(stack_a);
	
	while (*stack_b != NULL)
	{		
		assign_position(*stack_a);
		assign_position(*stack_b);
		assign_target(*stack_a, *stack_b);
		calculate_costs(*stack_a, *stack_b);
		move_cheapest_node(stack_a, stack_b);
/*  	 	if (*stack_b != NULL && (*stack_b)->next == NULL)
		{
		} */
	}
 	while (!list_is_sorted (stack_a))
	{

		move_smallest_node(stack_a);
	}

}

void move_smallest_node(t_node **stack_a)
{
	int size;
	int min_pos;
	t_node *current_pos;

	if (stack_a == NULL)
		return ;
	min_pos = find_smallest_index_pos(*stack_a);
	size = stack_size(*stack_a);
	current_pos = *stack_a;
	if (current_pos == NULL)
        return;
	
	if (min_pos <= size / 2) 
	{
        while (current_pos->pos < min_pos) 
		{
            make_ra(stack_a);
            current_pos->pos--;
        }
    } 
	else 
	{
        while (current_pos->pos < size - min_pos) 
		{
            make_rra(stack_a);
            current_pos->pos++;
        }
    }

}

 /* void sort_a_extra(t_node *stack_a)
{
	int size;
	int min_pos;
	int i;
	
	if (stack_a == NULL)
		return ;
	size = stack_size(stack_a);
	min_pos = find_lowest_pos(stack_a);
	i = 0;
	if (min_pos <= size / 2) 
	{
        while (i < min_pos) 
		{
            make_ra(&stack_a);
            i++;
        }
    } 
	else 
	{
        while (i < size - min_pos) 
		{
            make_rra(&stack_a);
            i++;
        }
    }
} 
 */
