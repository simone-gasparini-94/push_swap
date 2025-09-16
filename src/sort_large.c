/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:13:14 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:20:37 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"
#include "sort.h"
#include "operations.h"
#include "structs.h"

void	sort_large(t_node **a, t_node **b)
{
	int		bit_length;
	int		stack_length;
	int		i;
	int		j;

	i = 0;
	bit_length = get_bit_length(*a);
	while (i < bit_length)
	{
		j = 0;
		stack_length = get_list_length(*a);
		while (j < stack_length)
		{
			if ((((*a)->rank >> i) & 1) == 0)
				push(a, b, 'b');
			else
				rotate(a, 'a');
			j++;
		}
		while (*b != NULL)
			push(b, a, 'a');
		i++;
	}
}

int	get_bit_length(t_node *a)
{
	int	max_rank;
	int	bit_length;

	max_rank = get_max_rank(a);
	bit_length = 0;
	while (max_rank != 0)
	{
		max_rank >>= 1;
		bit_length++;
	}
	return (bit_length);
}

int	get_max_rank(t_node *a)
{
	t_node	*curr;
	t_node	*max;

	max = a;
	curr = a->next;
	while (curr != NULL)
	{
		if (curr->rank > max->rank)
			max = curr;
		curr = curr->next;
	}
	return (max->rank);
}
