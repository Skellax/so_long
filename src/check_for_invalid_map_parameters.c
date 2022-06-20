/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_invalid_map_parameters.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 08:41:31 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/06 10:47:54 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_for_invalid_map_parameters(char *str)
{
	int	param;

	param = 0;
	while ((str[param]) && ft_isprint(str[param]) == 1)
	{
		if ((str[param] == WALL)
			|| (str[param] == FLOOR)
			|| (str[param] == BONUS)
			|| (str[param] == PLAYER)
			|| (str[param] == EXIT))
			param++;
		else
			return (1);
	}
	return (0);
}
