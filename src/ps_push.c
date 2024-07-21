/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:40:13 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 22:10:57 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push(t_node **origin, t_node **dest)
{   
    t_node *temp;
    
    if(*origin == NULL)
        return;
    temp = (*origin)->next;
    (*origin)->next = *dest;
    *dest = *origin;
    *origin = temp;
    assign_position(*origin);
    assign_position(*dest);
}

void make_pa(t_node **stack_a, t_node **stack_b)
{
    ft_push(stack_b, stack_a);
	ft_printf("pa\n");
}
void make_pb(t_node **stack_a, t_node **stack_b)
{
    ft_push(stack_a, stack_b);
    ft_printf("pb\n");
}

