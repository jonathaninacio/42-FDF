/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 10:40:13 by joinacio          #+#    #+#             */
/*   Updated: 2017/05/12 16:05:04 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "../libft/libft.h"

# define FULLHDX 1920
# define FULLHDY 1080

typedef	struct	s_points
{
	char			*filename;
	int				lines;
	int				len;
	char			**pointfile;
	int				**map;
}				t_points;

typedef	struct	s_data
{
	void			*mlx;
	void			*win;
	int				move_x;
	int				move_y;
	int				orig_x;
	int				orig_y;
	int				color;
	unsigned char	red;
	unsigned char	gre;
	unsigned char	blu;
	void			*imgbg;
	int				*modifiable;
	char			*filename;
	char			**map;
	void			*stoopid;
	int				*stoopidm;
	t_points		*p;
	int				dx;
	int				sx;
	int				dy;
	int				sy;
	int				err;
	int				x0;
	int				xo;
	int				yo;
	int				x1;
	int				y1;
	int				x2;
	int				y2;
	int				zoom;
	int				zaxis;
	int				wiggle;
}				t_data;

/*
** ____________________________________________________________
**                                                             |
**                           main.c                            |
*/

void			make_transparent(t_data *z);
int				set_color(unsigned char a, unsigned char r, \
	unsigned char v, unsigned char b);
int				set_data(t_data *z);
void			multi_hook(t_data *z);

/*
** ____________________________________________________________
**                                                             |
**                       map_errors.c                          |
*/

int				ft_argvchecker(char *argv, int argc);
int				ft_put_arg_error(void);
void			ft_badmap(void);
void			ft_badinit(void);

/*
** ____________________________________________________________
**                                                             |
**                         create_map.c                        |
*/

int				**create_map(t_points *p);
void			ft_setmap(t_data *z);
void			ft_howto(void);

/*
** ____________________________________________________________
**                                                             |
**                          destroy.c                          |
*/

int				destroy(t_data *z);

/*
** ____________________________________________________________
**                                                             |
**                            key.c                            |
*/

int				key(int keycode, t_data *z);
void			key2(int keycode, t_data *z);
int				ft_expose(t_data *z);
void			ft_redraw(t_data *z);

/*
** ____________________________________________________________
**                                                             |
**                          motion.c                           |
*/

int				motion(int mouse_x, int mouse_y, t_data *z);
void			ft_rainbowshit(t_data *z);

/*
** ____________________________________________________________
**                                                             |
**                          button.c                           |
*/

int				button(int click, int x, int y, t_data *z);

/*
** ____________________________________________________________
**                                                             |
**                          parsing.c                          |
*/

int				ft_readlen(char *argv);
void			ft_readpoints(char *argv, t_points *p);
int				**ft_size_checker(t_points *p, int **iarray);

/*
** ____________________________________________________________
**                                                             |
**                            draw.c                           |
*/

void			map_draw(t_data *z);
void			draw_fdf(t_data *z);
void			drawpixel(t_data *z, int x, int y, int color);
int				check_positions(int x, int y);
void			trace_line(t_data *z, int y0, int x1, int y1);

/*
** ____________________________________________________________
**                                                             |
**                      prep_tracing.c                         |
*/

void			ft_preptrace(t_data *z, int y0, int x1, int y1);
void			ft_whiletracing(t_data *z, int i, int j);

#endif
