/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:47:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 16:32:26 by icruces-         ###   ########.fr       */
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
	//ft_printf("%s %s\n", "Value", "Index");
	printf("%s %s %s %s %s %s\n", "Value", "Index", " Pos", "Tg_Pos", "cost_a", "cost b" );

	while(stack)
	{		
		printf("  %ld  |  %d  |  %d  |  %d  |  %d  |  %d\n", stack->value, stack->index, stack->pos, stack->target_pos, stack->cost_a, stack->cost_b);
		stack = stack->next;
	}
	printf("  \n");

}
