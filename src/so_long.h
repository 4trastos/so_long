/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:37:32 by davgalle          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/31 16:17:23 by davgalle         ###   ########.fr       */
=======
/*   Updated: 2024/01/30 17:56:56 by nicgonza         ###   ########.fr       */
>>>>>>> 301187d3ee6044b2bb1916d4c5d4b54977b26282
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
#  define RIGHT -1
#  define LEFT + 1
#  define UP - 1
#  define DOWN + 1
# endif

//** STRUCT MLX **

<<<<<<< HEAD
typedef struct	s_data
{
	void    *mlx;
    void    *win;
	void	*img;
	char	*addr; //añadir resolucion
	int		bits_per_pixel; //bits or pixel
=======
typedef struct	s_data {
	void	*img;
	char	*addr; //añadir resolucion
	int		bits; //bits or pixel
>>>>>>> 301187d3ee6044b2bb1916d4c5d4b54977b26282
	int		line_length;
	int		endian; //el orden de los bites
}				t_data;

//** STRUCTS MAP CHECKER **
<<<<<<< HEAD

=======
>>>>>>> 301187d3ee6044b2bb1916d4c5d4b54977b26282
typedef struct s_error
{
	char	wall;
	char	space;
	char	exit;
	char	player;
	char	enemys;
	char	collect;

}				t_error;

typedef struct s_design
{
	int		wall;
	int		space;
	int		exit;
	int		player;
	int		enemys;
	int		collect;
	size_t	yp;
	size_t	xp;
	size_t	yc;
	size_t	xc;
	size_t	ye;
	size_t	xe;

}				t_design;

typedef struct s_move
{
	bool	right;
	bool	left;
	bool	up;
	bool	down;
}				t_move;

typedef struct s_radar
{
	int		right;
	int		left;
	int		up;
	int		down;
}				t_radar;

typedef struct s_game
{
	int	widht;
	int	right;
}				t_game;

//*** check map ***

char		**ft_check_arg(int argc, char **argv, t_design *design, char **map);
int			ft_strnrcmp(char *argv, char *str, int count);
char		**ft_check_map(int fd, t_design *design, char **map);
bool		is_valid_char(char c, t_error *error);
char		*ft_read_file(int fd, t_error *error, char *str, t_design *design);
bool		ft_check_dimension(char *line, t_error *error, size_t file_size);
bool		ft_feasible_map(char **map, t_design *design);
bool		ft_check_border(char **map);
bool		ft_middle_map(char *str, t_design *design);
bool		ft_restmap(char *str, t_design *design);
bool		ft_singleline(char **map, size_t boxes);
bool		ft_multiplelines(char **map, t_design *design);
bool		ft_solvemap(char **map, t_design *design);

//*** check cursor ***

int			ft_up(char **map, t_design *design);
int			ft_down(char **map, t_design *design);
int			ft_left(char **map, t_design *design);
int			ft_right(char **map, t_design *design);
char		ft_return_char(char **map, t_design *design);

//*** errors ***

void		ft_error_msg(char *msg, char **map);
void		ft_error_map(char *msg, char *line);
void		ft_freemap(char *msg, char **map);
void		ft_freedoublemap(char *msg, char **map, char **copy);

//** create new design node **

t_design	*ft_new_design(void);
t_error		*ft_new_error(void);
bool		ft_completemap(char *str, t_design *design);
t_move		*ft_new_move(void);
t_radar		*ft_new_radar(void);

//** get next line **

char		*get_next_line(int fd);
size_t		ft_strlen(char *str);
char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *board, char *buffer);
char		*ft_strdup(char *s1);

//** auxiliars **

char		*ft_strdup(char *s1);
size_t		ft_strlen_custom(char *line);
void		ft_file_size(char *line, size_t *size);
char		**ft_free_map(char **map);
bool		ft_gety(char **map, int c);
bool		ft_getx(char **map, int c);
size_t		ft_playlines(char **map);
size_t		ft_countboxes(char **map);
bool		ft_ifpow(char **map, t_design *design);
char		**ft_matrixdup(char **map);
bool		ft_canmove(char **map, t_design *design, t_move *move);
void		reset_road(char **map);
void		to_walk(char **map, t_design *design, t_radar *radar);

//** SPLIT **

char		**ft_empty_split(void);
char		*ft_strdup_custom(const char *s, size_t n);
char		**ft_free_str(char **aux);
int			ft_countc(char const *s, char c);
char		**ft_split(char const *s, char c);

//** WINDOW **
<<<<<<< HEAD

void		ft_window(void);
void		*mlx_init();
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);
=======
void		ft_window();
>>>>>>> 301187d3ee6044b2bb1916d4c5d4b54977b26282

//** GAME **

void		ft_init_game(char **map, t_design *design);
void		print_map(char **map);
int			main(int argc, char **argv);
#endif
