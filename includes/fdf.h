/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmessina <fmessina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 20:04:04 by fmessina          #+#    #+#             */
/*   Updated: 2017/04/26 17:16:08 by fmessina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include "mac.h"
# include "libft.h"
# include "mlx.h"
# include "X.h"
# include "get_next_line.h"

# define C_A			env->a
# define C_R			env->r
# define C_G			env->g
# define C_B			env->b
# define FP				env->map.p_map[0]
# define INT_MAX		2147483647
# define HUE			env->c
# define LINES			env->map.l
# define LP				env->map.p_map[PTS - 1]
# define MID			env->map.mid
# define MW_NAME 		"FDF"
# define PTS			env->map.n
# define ROWS			env->map.r
# define SC				env->scale
# define ZSC			env->zsc

typedef	struct		s_fpoint
{
	float			x;
	float			y;
	float			z;
}					t_fpoint;

typedef struct		s_map
{
	t_fpoint		*p_map;
	int				l;
	int				r;
	int				n;
	int				zmax;
	t_fpoint		mid;
}					t_map;

typedef struct		s_img
{
	void			*p_img;
	char			*img;
	int				x;
	int				y;
	int				w;
	int				h;
	int				bpp;
	int				endian;
}					t_img;

typedef	struct		s_env
{
	void			*mlx;
	void			*win;
	void			*p_scene;
	char			*scene;
	t_key			keys;
	t_map			map;
	int				m_w;
	int				m_h;
	int				w_w;
	int				w_h;
	int				s_w;
	int				s_h;
	int				s_x;
	int				s_y;
	int				pos;
	int				a;
	int				r;
	int				g;
	int				b;
	int				c;
	int				bpp;
	int				endian;
	int				s_l;
	int				r_mode;
	int				p_mode;
	int				off_x;
	int				off_y;
	int				off_z;
	int				r_x;
	int				r_y;
	int				r_z;
	int				scale;
	int				topo;
	float			zsc;
	int				guides;
	int				mouse_x;
	int				mouse_y;
}					t_env;

int					fdf_color(int a, int r, int g, int b);
void				fdf_reset_color(t_env *env);
void				fdf_init(t_env *env);
void				fdf_options_init(t_env *env);
t_map				fdf_file_read(char *av, t_map *map);
void				fdf_flush(char **array);
void				fdf_outline_img(t_env *env);
void				fdf_mid_guides(t_env *env);
int					fdf_loop_hook(t_env *env);
int					fdf_img_pix_put(t_env *env, int x, int y, int c);
void				fdf_img_line(t_env *env, t_fpoint p1, t_fpoint p2, int c);
int					fdf_key_press(int key, t_env *env);
int					fdf_key_release(int key, t_env *env);
void				fdf_keyboard(t_env *env);
t_fpoint			fdf_matrix_proj(t_env *env, t_fpoint pt);
int					fdf_mouse_events(int btn, int x, int y, t_env *env);
t_fpoint			fdf_mutate(t_env *env, int i);
void				fdf_render_points(t_env *env);
void				fdf_render_grid(t_env *env);
void				fdf_refresh(t_env *env);
int					fdf_quit(t_env *env);
void				fdf_error(char *str);

#endif
