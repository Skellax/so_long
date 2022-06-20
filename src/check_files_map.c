/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_files_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:28:27 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/04/04 10:51:22 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_files_map(int argc, char **argv)
{
	int	len_filename;

	if (argc > 2)
		error_msg("erreur, contient plus de 1 fichiers !");
	if (argc < 2)
		error_msg("erreur , impossible de trouver le fichier !");
	len_filename = ft_strlen(argv[1]);
	if (!ft_strnstr(&argv[1][len_filename - 4], ".ber", 4))
		error_msg(" le fichier ne contient pas l'extention .ber");
}
