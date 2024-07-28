/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:54:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/28 18:12:26 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrotate(t_node **stack)
{
    t_node *prev;
    t_node *tail;

    prev = NULL;
    //ft_printf("rrot\n");
    // Check if the stack is empty or has only one node
    if (!*stack || !(*stack)->next)
        return;
        
    // Find the tail of the stack
    tail = *stack;
    while (tail && tail->next != NULL)
    {
        prev = tail;
        tail = tail->next;
    }
     // Make the node before the last node the new tail
    prev->next = NULL;
    
    // Attach the old head to the end
    tail->next = *stack;
    *stack = tail;
    assign_position(*stack);

}
void make_rra(t_node **stack_a)
{
    ft_rrotate(stack_a);
    ft_printf("rra\n");
}
void make_rrb(t_node **stack_b)
{
    ft_rrotate(stack_b);
    ft_printf("rrb\n");
}

void make_rrr(t_node **stack_a, t_node **stack_b)
{
    ft_rrotate(stack_a);
    ft_rrotate(stack_b);
    ft_printf("rrr\n");
}
