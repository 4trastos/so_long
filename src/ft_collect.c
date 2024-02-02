/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:02:12 by davgalle          #+#    #+#             */
/*   Updated: 2024/02/02 18:04:23 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "../incl/game.h"

void	ft_collects(char **map, t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == 'C')
				mlx_put_image_to_window(game->mlx, game->new_w, game->sprites.collect, SIZE * x, SIZE * y);
			else if (map[y][x] == 'E')
				mlx_put_image_to_window(game->mlx, game->new_w, game->sprites.exit, SIZE * x, SIZE * y);
			x++;
		}
		y++;
	}
}
