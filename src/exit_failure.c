/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_failure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:04:58 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:27:19 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "structs.h"
#include "clean.h"
#include "ft_fprintf.h"

void	exit_failure(t_node **a, t_node **b, char ***arr)
{
	clean_all(a, b, arr);
	ft_fprintf(STDERR_FILENO, "Error\n");
	exit (EXIT_FAILURE);
}
