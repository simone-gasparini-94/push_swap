/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:03:00 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/22 14:52:58 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "libft.h"
#include "list.h"
#include "structs.h"

t_node	*create_list(char **arr)
{
	t_node	*list;
	t_node	*node;
	int		i;

	list = NULL;
	i = 0;
	while (arr[i] != NULL)
	{
		node = create_node(ft_atol(arr[i]));
		append_node_to_list(&list, node);
		i++;
	}
	return (list);
}

t_node	*create_node(long n)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->value = n;
	node->rank = UNRANKED;
	node->next = NULL;
	return (node);
}

void	append_node_to_list(t_node **list, t_node *node)
{
	t_node	*last_node;

	if (*list == NULL)
	{
		*list = node;
	}
	else
	{
		last_node = find_last_node(*list);
		last_node->next = node;
	}
}

int	get_list_length(t_node *list)
{
	t_node	*curr;
	int		len;

	len = 0;
	curr = list;
	while (curr != NULL)
	{
		curr = curr->next;
		len++;
	}
	return (len);
}
