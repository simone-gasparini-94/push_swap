/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rank.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:09:40 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/11 17:31:57 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"
#include "list.h"

void	assign_ranks(t_node *a, int argc)
{
	t_node	*smallest;
	int		rank;

	rank = 0;
	while (rank < argc)
	{
		smallest = find_smallest_unranked(a);
		smallest->rank = rank++;
	}
}

t_node	*find_smallest_unranked(t_node *a)
{
	t_node	*smallest;
	t_node	*curr;

	smallest = NULL;
	curr = a;
	while (curr != NULL)
	{
		if (curr->rank == UNRANKED)
		{
			if (smallest == NULL
				|| curr->value < smallest->value)
				smallest = curr;
		}
		curr = curr->next;
	}
	return (smallest);
}
