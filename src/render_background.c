/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_background.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 09:13:08 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:28:17 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_background(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = -1;
	while (x < game->map.lines)
	{
		while (y++ < game->map.columns - 1)
		{
			mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, \
			game->floor.img_ptr, y * game->floor.size.x, \
			x * game->floor.size.y);
		}
		y = -1;
		x++;
	}
}
