/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:44:10 by icruces-          #+#    #+#             */
/*   Updated: 2024/05/11 16:47:12 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_node *stack_tail(t_node *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

t_node *ft_add_new_node(long *content)
{
	t_node	*sending;

	sending = (t_node *)malloc(sizeof(*sending));
	if (!sending)
		return (0);
	sending->value = *content;
	sending->next = NULL;
	return (sending);
}

void add_stack_tail(t_node **stack, t_node *new)
{
	t_node *tail;
	
	if (!new)
	{
		ft_free_node(new);
		exit_error();
	}
	if (*stack == NULL)
		*stack = new;
	else
	{
		tail = stack_tail(*stack);
		tail->next = new;
	}
}

t_node *fill_stack(long *values, int size)
{
	int i;
	t_node *stack;
	
	i = 0;
	stack = NULL;
	while(i < size)
	{
		add_stack_tail(&stack, ft_add_new_node(&values[i]));
		i++;
	}
	i = 0;
/* 	while(stack)
	{
		ft_printf("stack value: %d\n", stack->value);
		stack = stack->next;
	} */
	//assign_index(stack, size + 1);
	return (stack);
}

void assign_index(t_node *stack, int stack_size)
{
	t_node *tagger;
	int 	tag;
	t_node *highest;

	while (--stack_size > 0)
	{
		tagger = stack;
		tag = INT_MIN;
		highest = NULL;
		while (tagger)
		{
			if (tagger->value == INT_MIN && tagger->index == 0)
				tagger->index = 1;
			if (tagger->value > tag && tagger->index == 0)
			{
				tag = tagger->value;
				highest = tagger;
				tagger = stack; //volver al principio de la lista
			}
			else
				tagger = tagger->next;
		}
		if (highest != NULL)
			highest->index = stack_size;
	}
/*  	while(stack)
	{
		ft_printf("*stack index: %d\n", stack->index);
		stack = stack->next;
	}   */
}
