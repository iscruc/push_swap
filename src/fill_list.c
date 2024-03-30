/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:44:10 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/30 16:10:05 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_node *ft_add_new_node(void *value)
{
	t_node	*sending;

	sending = (t_node *)malloc(sizeof(*sending));
	if (!sending)
		return (0);
	sending->content = value;
	sending->next = NULL;
	return (sending);
}

t_node fill_stack()
{
	
}