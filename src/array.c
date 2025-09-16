/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:17:50 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:37:02 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "array.h"

char	**get_array(int *argc, char **argv)
{
	char	**arr;
	int		i;

	if (*argc == 1)
	{
		arr = ft_split(argv[0], ' ');
		*argc = update_argc(arr);
	}
	else
	{
		arr = (char **)malloc(sizeof(char *) * (*argc + 1));
		if (arr == NULL)
			return (NULL);
		i = 0;
		while (i < *argc)
		{
			arr[i] = ft_strdup(argv[i]);
			i++;
		}
		arr[i] = NULL;
	}
	return (arr);
}

int	update_argc(char **arr)
{
	int	argc;

	argc = 0;
	while (arr[argc] != NULL)
		argc++;
	return (argc);
}
