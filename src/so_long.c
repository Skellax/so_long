/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 08:55:54 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:22:42 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	check_files_map(argc, argv);
	init_vars(&game);
	init_map(&game, argv[1]);
	check_size_map(&game);
	init_game(&game);
	render_background(&game);
	print_map(&game);
	mlx_key_hook(game.win_ptr, *ft_input, &game);
	mlx_loop(game.mlx_ptr);
}
