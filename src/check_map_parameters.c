/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_parameters.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:05:50 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/06 10:15:20 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_map_parameters(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.lines)
	{
		if (check_for_invalid_map_parameters(game->map.tab[i]) == 1)
			error_msg("Parametre invalide !");
		game->map.bonus += count_char(game->map.tab[i], BONUS);
		game->map.nb_player += count_char(game->map.tab[i], PLAYER);
		game->map.exit += count_char(game->map.tab[i], EXIT);
		if (game->map.nb_player == 1)
			init_player_position(game, game->map.tab[i], i);
		i++;
	}
	if (game->map.bonus == 0)
		error_msg("Aucun bonus sur la map!");
	else if (game->map.exit != 1)
		error_msg("Erreur , aucune ou plusieurs sorties recu !");
	else if (game->map.nb_player != 1)
		error_msg("Erreur, aucun ou plusieurs joueur recu !");
}
