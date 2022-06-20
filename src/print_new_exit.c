/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_new_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 08:18:07 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:21:57 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	print_new_exit(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (game->map.bonus == 0)
	{
		game->exit.img_ptr = mlx_xpm_file_to_image(game->mlx_ptr, \
				"assets/ufo1.xpm", &game->exit.size.x, &game->exit.size.y);
		while (x < game->map.lines)
		{
			while (y < game->map.columns)
			{
				if (game->map.tab[x][y] == EXIT && game->map.bonus == 0)
					mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
game->exit.img_ptr, y * game->exit.size.x, x * game->exit.size.y);
				y++;
			}
			y = 0;
			x++;
		}
	}
}
