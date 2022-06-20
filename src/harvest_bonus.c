/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harvest_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:22:50 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 07:46:22 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	harvest_bonus(t_game *game)
{
	if (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] == BONUS)
	{
		game->map.bonus -= 1;
		game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] = FLOOR;
	}
}
