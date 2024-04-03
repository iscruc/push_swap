/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:54:42 by icruces-          #+#    #+#             */
/*   Updated: 2024/04/03 21:00:32 by icruces-         ###   ########.fr       */
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

