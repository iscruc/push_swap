/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_list_checks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:17:45 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/31 18:23:55 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int list_is_sorted(t_node **stack)
{
	t_node *aux;
	
	aux = *stack;
	while (aux && aux->next)
	{
		if(aux->value > aux->next->value)
			return (0);
		aux = aux->next;
	}
	return (1);
}