/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:01:47 by beborch           #+#    #+#             */
/*   Updated: 2018/02/22 04:15:41 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 4096

#include "libft.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct 	s_chaine
{
	char *str;
	
	struct s_chaine *prev;
	struct s_chaine *next;
}				t_chaine;

typedef struct 	s_fill
{
//multi fonction
	t_chaine *list;
	int i;
	int j;
//main	
	int file;
	int ret;
	char buff[BUFF_SIZE];
//cat_list
//	int i;
//	int j;
	char tmp[20];
//malloc_filling
	char **map;
	int len;
//putter
	int x;
	int y;
	char letter;
	int k;
	int tmp[20];

//init_struct
	char b[20][15];
//fill_comp
	int nbr[20];

	int alloc_x;
	int alloc_y;
} 				t_fill;



int		ft_bloc0(t_fill *map);
int		ft_bloc1(t_fill *map);
int		ft_bloc2(t_fill *map);
int		ft_bloc3(t_fill *map);
int		ft_bloc4(t_fill *map);
int		ft_bloc5(t_fill *map);
int		ft_bloc6(t_fill *map);
int		ft_bloc7(t_fill *map);
int		ft_bloc8(t_fill *map);
int		ft_bloc9(t_fill *map);
int		ft_bloc10(t_fill *map);
int		ft_bloc11(t_fill *map);
int		ft_bloc12(t_fill *map);
int		ft_bloc13(t_fill *map);
int		ft_bloc14(t_fill *map);
int		ft_bloc15(t_fill *map);
int		ft_bloc16(t_fill *map);
int		ft_bloc17(t_fill *map);
int		ft_bloc18(t_fill *map);

int		check_bloc0(t_fill *map);
int		check_bloc1(t_fill *map);
int		check_bloc2(t_fill *map);
int		check_bloc3(t_fill *map);
int		check_bloc4(t_fill *map);
int		check_bloc5(t_fill *map);
int		check_bloc6(t_fill *map);
int		check_bloc7(t_fill *map);
int		check_bloc8(t_fill *map);
int		check_bloc9(t_fill *map);
int		check_bloc10(t_fill *map);
int		check_bloc11(t_fill *map);
int		check_bloc12(t_fill *map);
int		check_bloc13(t_fill *map);
int		check_bloc14(t_fill *map);
int		check_bloc15(t_fill *map);
int		check_bloc16(t_fill *map);
int		check_bloc17(t_fill *map);
int		check_bloc18(t_fill *map);
#endif
