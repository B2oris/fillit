/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:01:47 by beborch           #+#    #+#             */
/*   Updated: 2018/03/23 18:56:28 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 4096
# define PIECES (19)
# define MAX_PIECES (21)
# define MAX_MAP_SIZE (20)

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

typedef struct 	s_size_t2
{
    size_t x;
    size_t y;
} 				t_size_t2;


typedef struct 	s_fill
{
//multi fonction
	//t_chaine *list;

	
	int i; // cat_list, parse
	int j; // cat_list,	parse
	int k; // parse
	int l; // parse
	int tmp; // check_parse
	
	char parsing[21][17];

	char cat_tmp[20]; // cat_list

	int file; //main
	int ret;	//main
	char buff[BUFF_SIZE];	//main

	size_t num_piece; //

	size_t map_size; //solver
	size_t piece; //solver

	char map[20][20];
} 				t_fill;

static const char *g_pieces[PIECES] = {
    "#...#...#...#...",
    "####............",
    "#...#...##......",
    ".#...#..##......",
    "###.#...........",
    "###...#.........",
    "#...###.........",
    "..#.###.........",
    "##..#...#.......",
    "##...#...#......",
    "##..##..........",
    "###..#..........",
    ".#..###.........",
    "#...##..#.......",
    ".#..##...#......",
    "#...##...#......",
    ".#..##..#.......",
    "##...##.........",
    ".##.##.........."};

#endif
