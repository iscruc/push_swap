/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:12:32 by icruces-          #+#    #+#             */
/*   Updated: 2024/04/07 21:58:11 by icruces-         ###   ########.fr       */
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

void sort_three(t_node **stack)
{
	int highest;

	highest = find_highest_index(*stack);
	if((*stack)->index == highest)
		ft_rotate(stack);
	else if ((*stack)->next->index == highest)
		ft_rrotate(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_swap_sa(stack);

	
} 
