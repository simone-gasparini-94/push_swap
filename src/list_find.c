/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:08:41 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/11 17:46:49 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"
#include "structs.h"

t_node	*find_last_node(t_node *list)
{
	t_node	*curr;

	curr = list;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr);
}

t_node	*find_previous_to_last(t_node *list)
{
	t_node	*curr;

	curr = list;
	while (curr->next->next != NULL)
		curr = curr->next;
	return (curr);
}

int	find_index(t_node *list, int rank)
{
	t_node	*curr;
	int		index;

	index = 0;
	curr = list;
	while (curr != NULL)
	{
		if (curr->rank == rank)
			return (index);
		index++;
		curr = curr->next;
	}
	return (-1);
}

t_node	*find_smallest(t_node *list)
{
	t_node	*smallest;
	t_node	*curr;

	smallest = NULL;
	curr = list;
	while (curr != NULL)
	{
		if (smallest == NULL)
			smallest = curr;
		else if (curr->value < smallest->value)
			smallest = curr;
		curr = curr->next;
	}
	return (smallest);
}
