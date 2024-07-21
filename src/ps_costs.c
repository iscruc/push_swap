/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_costs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:57:32 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 21:19:06 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void calculate_costs(t_node *stack_a, t_node *stack_b)
{
   t_node *stack_b_temp;
   int stack_a_size;
   int stack_b_size;
   
   stack_b_temp = stack_b;
   stack_a_size = stack_size(stack_a);
   stack_b_size = stack_size(stack_b);

   while(stack_b_temp != NULL)
   {
        if (stack_b_temp->pos <= stack_b_size/2)
            stack_b_temp->cost_b = stack_b_temp->pos;
        else 
            stack_b_temp->cost_b = (stack_b_size - stack_b_temp->pos) * -1;
        
        if (stack_b_temp->target_pos <= stack_a_size/2)
            stack_b_temp->cost_a = stack_b_temp->target_pos;
        else 
            stack_b_temp->cost_a = (stack_a_size - stack_b_temp->target_pos) * -1;
        stack_b_temp=stack_b_temp->next;
   }
    
}

