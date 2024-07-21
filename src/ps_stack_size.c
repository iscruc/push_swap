/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:39:15 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 20:51:19 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_size(t_node *stack)
{
    int i;
    
    i = 0;
    if (stack ==NULL) 
        return (0);
    while (stack)
    {
        stack = stack->next;
        i++; 
    }
    return (i);
}
