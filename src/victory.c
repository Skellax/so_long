/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:16:34 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 08:53:38 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	victory(t_game *game)
{
	if (game->map.tab[game->map.player_p.y / 100] \
			[game->map.player_p.x / 100] == EXIT)
	{
		ft_printf("nbre de coups -> %d\n", game->movements);
		win_msg("GG, vous avez gagne !");
	}
}
