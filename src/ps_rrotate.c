/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:54:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/04/07 21:54:51 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrotate(t_node **stack)
{
    t_node *head;
    t_node *tail;

    ft_printf("rot\n");
    // Check if the stack is empty or has only one node
    if (!*stack || !(*stack)->next)
        return;
    
    head = *stack;
    *stack = (*stack)->next;
    head->next = NULL; // Move this line here

    // Find the tail of the stack
    tail = *stack;
    while (tail && tail->next != NULL)
        tail = tail->next;

    // Attach the old head to the end
    tail->next = head;
}

