/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 08:00:55 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/05 10:05:34 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_char(char *str, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (str[x] != '\0' && ft_isprint(str[x]) != 0)
	{
		if (str[x] == c)
			count++;
		x++;
	}
	return (count);
}
