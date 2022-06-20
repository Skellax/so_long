/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 08:49:31 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/12 10:02:06 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h> 
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/libft.h"

//COLORS

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
//MACROS 

# define PLAYER 'P'
# define WALL '1'
# define FLOOR '0'
# define EXIT 'E'
# define BONUS 'C'

//--------------------------
// VARIABLES 

# define WIDTH game->map.columns * 100 
# define HEIGTH game->map.lines * 100

//---------------------------
//STRUCTURES

typedef struct s_vector
{
	int	x;
	int	y;
}	t_vector;

typedef struct s_image
{
	void		*img_ptr;
	t_vector	size;
}				t_image;

typedef struct s_map
{
	char		**tab;
	int			lines;
	int			columns;
	int			bonus;
	int			exit;
	int			nb_player;
	t_vector	player_p;
}	t_map;

typedef struct s_game
{
	void		*mlx_ptr;
	void		*win_ptr;
	int			movements;
	t_map		map;
	t_image		wall;
	t_image		player;
	t_image		bonus;
	t_image		exit;
	t_image		floor;
}	t_game;

//--------------------------------
//FONCTIONS

void	init_vars(t_game *game);
void	init_game(t_game *game);
void	print_map(t_game *game);
int		count_char(char	*str, char c);
void	init_map(t_game *game, char *argv);
void	check_files_map(int argc, char **argv);
void	init_player_position(t_game *game, char *line, int y);
void	error_msg(char	*message);
void	check_size_map(t_game *game);
size_t	ft_new_strlen(const char *s);
int		ft_input(int key, void *param);
int		check_for_invalid_map_parameters(char *str);
void	check_map_parameters(t_game *game);
void	ft_left(t_game *game, int key);
void	ft_right(t_game *game, int key);
void	ft_up(t_game *game, int key);
void	ft_down(t_game *game, int key);
void	ft_esc(t_game *game, int key);
void	harvest_bonus(t_game *game);
void	print_new_exit(t_game *game);
void	win_msg(char *message);
void	victory(t_game *game);
void	put_image(t_game *game);
void	render_background(t_game *game);
int		ft_close(void);

#endif
