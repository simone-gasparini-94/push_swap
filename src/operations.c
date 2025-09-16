/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:38:34 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/07 14:58:36 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"
#include "operations.h"
#include "list.h"
#include "ft_printf.h"

void	swap(t_node **stack, char c)
{
	t_node	*first;
	t_node	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	if (c == 'a')
		ft_printf("sa\n");
	else if (c == 'b')
		ft_printf("sb\n");
	else
		exit (EXIT_FAILURE);
}

void	push(t_node **from, t_node **to, char c)
{
	t_node	*first;
	t_node	*second;

	first = *from;
	second = (*from)->next;
	first->next = *to;
	*to = first;
	*from = second;
	if (c == 'a')
		ft_printf("pa\n");
	else if (c == 'b')
		ft_printf("pb\n");
	else
		exit (EXIT_FAILURE);
}

void	rotate(t_node **stack, char c)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	first = *stack;
	second = (*stack)->next;
	last = find_last_node(*stack);
	last->next = first;
	first->next = NULL;
	*stack = second;
	if (c == 'a')
		ft_printf("ra\n");
	else if (c == 'b')
		ft_printf("rb\n");
	else
		exit (EXIT_FAILURE);
}

void	reverse_rotate(t_node **stack, char c)
{
	t_node	*last;
	t_node	*previous;

	last = find_last_node(*stack);
	previous = find_previous_to_last(*stack);
	previous->next = NULL;
	last->next = *stack;
	*stack = last;
	if (c == 'a')
		ft_printf("rra\n");
	else if (c == 'b')
		ft_printf("rrb\n");
	else
		exit (EXIT_FAILURE);
}
