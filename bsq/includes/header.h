/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:41:08 by enennige          #+#    #+#             */
/*   Updated: 2017/11/15 14:25:08 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>

typedef struct		s_board
{
	int		b_width;
	int		b_height;
	char	empty_char;
	char	full_char;
	char	obst_char;
	char	*str_board;
	int		max_val;
	int		max_val_pos;
}					t_board;

int					ft_atoi(char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
char				*ft_strcpy(char *dest, char *src);
int					ft_strlen(char *str);
void				ft_putnbr(int nb);
void				ft_puterror(char *str);
char				**get_maps(int ac, char **av);
char				*read_file(int fd);
char				*join_strings(char *str_existing, char *str_add);
int					title_length(char *str);
int					get_height(char *title);
int					first_line_length(char *str);
int					input_is_valid(char *str);
int					check_board_shape(char *str, int i, int title_len,
		int first_line_len);
int					count_lines(char *str);
t_board				*init_board(char *str);
char				*get_line(char *str);
char				*cutstr(char *str, int n);
void				set_max_val(t_board **board);
int					*get_num_arr(char *str, char obst, int b_width, int length);
int					max_val(int *arr, int len);
void				get_cmp_indices(int position, int width, int **indices);
int					min_val(int *arr, int nb, int nb2, int nb3);
void				draw_square(t_board *board);
int					*square_arr(int pos, int max_val, int width);

#endif
