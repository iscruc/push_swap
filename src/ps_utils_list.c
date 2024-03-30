/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:44:10 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/30 19:45:29 by icruces-         ###   ########.fr       */
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
t_node *add_stack_tail(t_node *stack, t_node *new)
{
	t_node *tail;
	
	if (!new)
	{
		ft_free_node(new);
		exit_error();
	}
	if (stack == NULL)
		stack = new;
	else
	{
		tail = stack_tail(stack);
		tail->next = new;
	}
	return (stack);
}

t_node *fill_stack(long *values, int size)
{
	t_node *stack;
	int i;
	
	i = 0;
	//stack = (t_node *)malloc(sizeof(t_node *));
	//ft_printf("in fill num: %d", stack);
	stack = NULL;
	while(i < size)
	{
		stack = add_stack_tail(stack, ft_add_new_node(&values[i]));
		i++;
		ft_printf("*stack: %d\n", stack->value);
		stack = stack->next;
	}
	return stack;
}