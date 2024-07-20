/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:40:13 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 11:20:59 by icruces-         ###   ########.fr       */
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
}

