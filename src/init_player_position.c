/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:57:06 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/06 16:10:30 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_player_position(t_game *game, char *line, int y)
{
	int	x;

	x = 0;
	while ((line[x] != '\0') && line[x] != PLAYER)
		x++;
	if (line[x] == '\0')
		return ;
	game->map.player_p.x = x * 100;
	game->map.player_p.y = y * 100;
}
