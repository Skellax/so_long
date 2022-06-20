/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:05:54 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 09:28:49 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	init_map(t_game *game, char *argv)
{
	char	*read_str;
	char	*temp;
	int		map_fd;
	int		i;

	i = 0;
	map_fd = open(argv, O_RDONLY);
	if (map_fd == -1)
		error_msg("La map n'a pas pu s'ouvir !");
	read_str = get_next_line(map_fd);
	temp = ft_strdup("");
	while (read_str)
	{
		temp = ft_strjoin(temp, read_str);
		read_str = get_next_line(map_fd);
		i++;
	}
	close(map_fd);
	game->map.tab = ft_split(temp, '\n');
	game->map.lines = i;
	game->map.columns = ft_strlen(game->map.tab[0]);
}
