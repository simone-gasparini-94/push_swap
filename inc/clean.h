/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:07:38 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:26:11 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLEAN_H
# define CLEAN_H

# include "structs.h"

void	clean_all(t_node **a, t_node **b, char ***arr);
void	clean_arr(char ***arr);
void	clean_list(t_node **stack);

#endif
