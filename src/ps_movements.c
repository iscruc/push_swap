/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:29:04 by icruces-          #+#    #+#             */
/*   Updated: 2024/04/02 22:36:46 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(t_node **stack)
{
	int temp_value;
	int temp_index;
	
	if ((*stack == NULL) || (*stack)->next == NULL)
		return;

	temp_value = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp_value;
	temp_index = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = temp_index;
}

void ft_rotate_ra()