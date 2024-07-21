/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:47:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 15:06:14 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void assign_position(t_node *stack_a)
{
    t_node *temp;

    int i;
    
    i = 0;
    temp = stack_a;
    while (temp != NULL)
    {
        temp->pos = i;
        temp = temp->next;
        i++;
    }
}

void assign_target(t_node *stack_a, t_node *stack_b)
{
    t_node *stack_b_temp;
    
    int target_pos;
    
    stack_b_temp = stack_b;
    while (stack_b_temp != NULL)
    {
        target_pos = find_closest_superior(stack_a, stack_b_temp->index);
        if (target_pos == -1)
        {
            target_pos = find_smallest_index_pos(stack_a);
        }
        stack_b_temp->target_pos = target_pos;
        stack_b_temp = stack_b_temp->next;
    }
}

int find_closest_superior(t_node *stack_a, int b_index)
{
    t_node *stack_a_temp;
    
    stack_a_temp = stack_a;
    int closest_index;
    int closest_pos;
    closest_index = -1;
    closest_pos = -1;
    
    while (stack_a_temp != NULL)
    {
        if (stack_a_temp->index > b_index)
        {
            if (closest_index == -1 || stack_a_temp->index < closest_index)
            {
                closest_index = stack_a_temp->index;
                closest_pos = stack_a_temp->pos;
            }
        }
        stack_a_temp = stack_a_temp->next;
    }
    return closest_pos;
    
}

int find_smallest_index_pos(t_node *stack_a)
{
    t_node *stack_a_temp;
    int smallest_index;
    int smallest_pos;

    stack_a_temp = stack_a;
    smallest_index = -1;
    smallest_pos = 0;
    while (stack_a_temp != NULL)
    {
        if(smallest_index == -1 || stack_a_temp->index < smallest_index)
        {
            smallest_index = stack_a_temp->index;
            smallest_pos = stack_a_temp->pos;
        }
        stack_a_temp = stack_a_temp->next;
    }
    return smallest_pos;
}
