# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmessina <fmessina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/28 16:17:09 by fmessina          #+#    #+#              #
#    Updated: 2017/04/26 17:18:03 by fmessina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = clang
CFLAGS += -Wall -Wextra -Werror
INCLUDES = -I includes/ -I libft/ -I minilibx/
MLX = minilibx/libmlx.a -framework OpenGL -framework AppKit
LIBFT = libft/libft.a
SRC_PATH = src
SRC_NAME =  fdf_color.c \
		    fdf_core.c \
			fdf_file.c \
			fdf_guides.c \
			fdf_hook.c \
			fdf_image_draw.c \
			fdf_key_press.c \
			fdf_key_release.c \
			fdf_keyboard.c \
			fdf_matrox.c \
			fdf_mouse.c \
			fdf_mutate.c \
		    fdf_render.c \
			fdf_util.c \
			get_next_line.c \
			main.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ_PATH = obj
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(SRC)
	make -C libft/
	make -C minilibx/
	$(CC) $(CFLAGS) $(INCLUDES) -lm $(LIBFT) $(MLX) -o $(NAME) $(SRC)

clean:
	make -C libft/ clean
	make -C minilibx/ clean
	rm -f $(OBJ) config

fclean: clean
	make -C libft/ clean
	make -C minilibx/ clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re fdf config