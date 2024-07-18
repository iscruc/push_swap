/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:29:04 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/18 21:22:53 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap_sa(t_node **stack)
{
	int temp_value;
	int temp_index;

	ft_printf("sa\n");
	if ((*stack == NULL) || (*stack)->next == NULL)
		return;

	temp_value = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = temp_value;
	temp_index = (*stack)->index;
	(*stack)->index = (*stack)->next->index;
	(*stack)->next->index = temp_index;
}

