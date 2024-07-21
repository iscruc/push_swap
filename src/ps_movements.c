/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_movements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:34:00 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/21 22:17:15 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_node *find_cheapest_node(t_node *stack_b)
{
    t_node *stack_b_temp;
    t_node *cheapest_node;
    int current_cost;
    int min_cost;
    
    min_cost = abs(stack_b->cost_a) + abs(stack_b->cost_b);
    stack_b_temp = stack_b;
    cheapest_node = 0;
    while (stack_b_temp != NULL)
    {
        current_cost = abs(stack_b_temp->cost_a) + abs(stack_b_temp->cost_b);
        if (current_cost < min_cost)
        {
            cheapest_node = stack_b_temp;
            min_cost = current_cost;
        }
        stack_b_temp = stack_b_temp->next;
    }
    return cheapest_node;
}

void move_cheapest_node(t_node **stack_a, t_node **stack_b)
{
    t_node *cheapest_node;

    cheapest_node = find_cheapest_node(stack_b);
    
    if (cheapest_node->cost_a > 0 && cheapest_node->cost_b > 0)
        move_both_positive_to_top(stack_a, stack_b, cheapest_node);
    else if(cheapest_node->cost_a < 0 && cheapest_node->cost_b < 0)
        move_both_negative_to_bottom(stack_a, stack_b, cheapest_node);
    
    move_rest_costs_a(stack_a, cheapest_node);
    move_rest_costs_b(stack_b, cheapest_node);
    
    make_pa(stack_a, stack_b);
}

void move_both_positive_to_top(t_node **stack_a, t_node **stack_b, t_node *cheapest_node) 
{
    while (cheapest_node->cost_a > 0 && cheapest_node->cost_b > 0) 
    {
        make_ra(stack_a);
        make_rb(stack_b);
        cheapest_node->cost_a--;
        cheapest_node->cost_b--;
    }
}

void move_both_negative_to_bottom(t_node **stack_a, t_node **stack_b, t_node *cheapest_node) 
{
    while (cheapest_node->cost_a < 0 && cheapest_node->cost_b < 0) 
    {
        make_rra(stack_a);
        make_rrb(stack_b);
        cheapest_node->cost_a--;
        cheapest_node->cost_b--;
    }
}

void move_rest_costs_a(t_node **stack_a, t_node *cheapest_node)
{
    while (cheapest_node->cost_a > 0)
    {
        make_ra(stack_a);
        cheapest_node->cost_a--;
    }
    while (cheapest_node->cost_a < 0)
    {
        make_ra(stack_a);
        cheapest_node->cost_a++;
    }
}

void move_rest_costs_b(t_node **stack_b, t_node *cheapest_node)
{
    while (cheapest_node->cost_a > 0)
    {
        make_ra(stack_b);
        cheapest_node->cost_b--;
    }
    while (cheapest_node->cost_a < 0)
    {
        make_ra(stack_b);
        cheapest_node->cost_b++;
    }
}


