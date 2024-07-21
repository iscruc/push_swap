/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:47:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 21:57:11 by icruces-         ###   ########.fr       */
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
    t_node *temp_b;
    t_node *target_giver;
    int i;
    printf("holi\n");

    temp_b = stack_b;
    while (temp_b != NULL)
    {
        printf("inside while target\n");
        i = 0;

        while (target_giver->value < stack_a->value)
        {
            target_giver->target_pos = i;
            printf("Target value %d\n", target_giver->target_pos);
            target_giver = target_giver->next;
            i++;
        }
        temp_b = temp_b->next;
    }
}