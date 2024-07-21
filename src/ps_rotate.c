/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:54:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 20:21:46 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void ft_rotate(t_node **stack)
{
	t_node *head;
	t_node *tail;

	ft_printf("rot\n");
 	if(!*stack || (*stack)->next)
		return ;
	head = *stack;
	*stack = (*stack)->next;
 	while(*stack && (*stack)->next != NULL)
		*stack = (*stack)->next;
	tail = *stack;
	head->next = NULL;
	tail->next = head;
} */
void ft_rotate(t_node **stack)
{
    t_node *head;
    t_node *tail;
    t_node *before_tail;

    ft_printf("rot\n");
    // Check if the stack is empty or has only one node
    if (!*stack || !(*stack)->next)
        return;
    
    head = *stack;
    before_tail = *stack;

    *stack = (*stack)->next;
    head->next = NULL; // Move this line here
    // Find the tail of the stack
    tail = *stack;
    while (tail && tail->next != NULL)
        tail = tail->next;
    while (before_tail && before_tail->next && before_tail->next->next != NULL)
		before_tail = before_tail->next;
    // Attach the old head to the end
    tail->next = head;
    before_tail->next = NULL;
    assign_position(*stack);
}

