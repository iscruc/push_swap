/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:12:32 by icruces-          #+#    #+#             */
/*   Updated: 2024/04/03 20:17:52 by icruces-         ###   ########.fr       */
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
} 
