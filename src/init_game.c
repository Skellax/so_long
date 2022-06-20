/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 10:07:34 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:56:20 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_game(t_game *game)
{
	game->mlx_ptr = mlx_init();
	if (game->mlx_ptr == NULL)
		error_msg("pointeur mlx introuvable");
	game->win_ptr = mlx_new_window(game->mlx_ptr, WIDTH, HEIGTH, "so_long");
	if (game->win_ptr == NULL)
		error_msg("erreur ! fenetre introuvable!");
	game->wall.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"assets/wall.xpm", &game->wall.size.x, &game->wall.size.y);
	game->floor.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"assets/floor.xpm", &game->floor.size.x, &game->floor.size.y);
	game->bonus.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"assets/bonus.xpm", &game->bonus.size.x, &game->bonus.size.y);
	game->exit.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"assets/ufo0.xpm", &game->exit.size.x, &game->exit.size.y);
	game->player.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
"assets/alien.xpm", &game->player.size.x, &game->player.size.y);
	mlx_hook(game->win_ptr, 17, 0, ft_close, 0);
}
