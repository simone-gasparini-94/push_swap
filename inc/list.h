/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:57:33 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/11 15:13:55 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "structs.h"

# define UNRANKED -1

t_node	*create_list(char **arr);
t_node	*create_node(long n);
void	append_node_to_list(t_node **list, t_node *node);
int		get_list_length(t_node *list);
t_node	*find_last_node(t_node *list);
t_node	*find_previous_to_last(t_node *list);
int		find_index(t_node *list, int n);
void	assign_ranks(t_node *a, int argc);
t_node	*find_smallest_unranked(t_node *a);
t_node	*find_smallest(t_node *a);

#endif
