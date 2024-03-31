/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:47:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/31 18:13:46 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free(char **str)
{	
	int i;
	
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
void ft_free_node(t_node *node)
{	
	free(node);
}

void ft_free_stack(t_node **stack)
{
	t_node *freer;
	
	if(!stack || !(*stack))
		return ;
	while(*stack)
	{
		freer = (*stack)->next;
		free(*stack);
		*stack = freer;
	}
}

void print_stack(t_node *stack)
{
	ft_printf("%s %s\n", "Value", "Index");

	while(stack)
	{		
		ft_printf("  %d  |  %d\n", stack->value, stack->index);
		stack = stack->next;
	}
	ft_printf("  %s\n", "A");

}
