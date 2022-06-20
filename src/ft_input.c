/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:46:51 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 13:13:04 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_input(int key, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	mlx_clear_window(game->mlx_ptr, game->win_ptr);
	ft_left(game, key);
	ft_right(game, key);
	ft_up(game, key);
	ft_down(game, key);
	ft_esc(game, key);
	printf(" nbre de mouvements -> %d\n", game->movements);
	put_image(game);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 50, 50, \
	0xfffafa, ft_itoa(game->movements));
	harvest_bonus(game);
	print_new_exit(game);
	victory(game);
	return (0);
}
