/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:59:41 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:32:33 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_image(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	render_background(game);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
	game->player.img_ptr, game->map.player_p.x, game->map.player_p.y);
	while (x < game->map.lines)
	{
		while (y++ < game->map.columns)
		{
			if (game->map.tab[x][y] == WALL)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->wall.img_ptr, y * game->wall.size.x, x * game->wall.size.y);
			else if (game->map.tab[x][y] == BONUS && game->map.bonus != 0)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->bonus.img_ptr, y * game->bonus.size.x, x * game->bonus.size.y);
			else if (game->map.tab[x][y] == EXIT && game->map.bonus != 0)
				mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
		game->exit.img_ptr, y * game->exit.size.x, x * game->bonus.size.y);
		}
		y = -1;
		x++;
	}
}
