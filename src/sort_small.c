/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:30:21 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:20:31 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "sort.h"
#include "operations.h"
#include "structs.h"

void	sort_two(t_node **a)
{
	t_node	*first;
	t_node	*second;

	first = *a;
	second = (*a)->next;
	if (first->value > second->value)
		swap(a, 'a');
}

void	sort_three(t_node **a)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	while (is_stack_sorted(*a) == false)
	{
		first = *a;
		second = (*a)->next;
		last = find_last_node(*a);
		if (first->value > second->value)
		{
			if (first->value > last->value)
				rotate(a, 'a');
			else
				swap(a, 'a');
		}
		else
			reverse_rotate(a, 'a');
	}
}

void	sort_small(t_node **a, t_node **b)
{
	t_node	*smallest;
	int		index;
	int		len;

	len = get_list_length(*a);
	while (len > 3)
	{
		smallest = find_smallest(*a);
		index = find_index(*a, smallest->rank);
		if (index < len / 2)
			while (index-- > 0)
				rotate(a, 'a');
		else
			while (index++ < len)
				reverse_rotate(a, 'a');
		push(a, b, 'b');
		len--;
	}
	sort_three(a);
	while (is_stack_empty(*b) == false)
		push(b, a, 'a');
}
