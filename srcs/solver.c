/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 19:46:44 by beborch           #+#    #+#             */
/*   Updated: 2018/03/17 22:13:57 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "fillit.h"

int		solver(t_parse *parse, t_rendu *map)
{

	map->len = 250;
	map->i = 0;
	//bloc tetris;
	//if (parser(parse, map) == -1)
		return (-1);
	malloc_fill(map);
	algo(map);
	//print(&map);
	//ft_putchar('a');
	while (last_check(map) == -1)
	{
		map->len--;
		map->i = 0;
		malloc_fill(map);
		algo(map);
	}
	print(map);
	//ft_putnbr(last_check(&map));
	return (0);
}

int		last_check(t_rendu *map)
{
	int i;
	int j;
	int line1;
	int line2;
	int tmp;

	i = 0;
	j = 0;
	line1 = 0;
	line2 = 0;
	while (map->map[i][j] != '\0')
		j++;
	j--;
	while (map->map[i] != NULL)
	{
		if (map->map[i][j] == '.')
			line1++;
		i++;
	}
	tmp = j;
	i--;
	while(j > 0)
	{
		if (map->map[i][j] == '.')
			line2++;
		j--;
	}
	if((line1 - 1 == i) && (line2 == tmp))
		return(-1);
	return (0);
}

int		algo(t_rendu *map)
{
	int i;
	i = 0;

	map->x = 0;
	map->y = 0;
	map->letter = 'A';
	while(map->nbr[map->i] != -1 && check(map) == 0)
	{
		putter(map);
		while(check(map) == -1)
		{
			clean_letter(map);
			map->y++;
			//ft_putchar('a');
			if (map->y >= map->len)
			{
				map->y = 0;
				map->x++;
			}
			putter(map);
		}
		map->i++;
		map->letter++;
	}
	return (0);
}

void	clean_letter(t_rendu *map)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (map->map[i] != NULL)
	{	
		while(map->map[i][k] != '\0')
		{
			if (map->map[i][k] == map->letter)
				map->map[i][k] = '.';
			if (map->map[i][k] == '1')
				map->map[i][k] = map->letter - 1;
			k++;
		}
		k = 0;
		i++;		
	}
}

void	putter(t_rendu *map)
{ 
	(map->nbr[map->i]) == 0 ? ft_bloc0(map) : (void)0;
	(map->nbr[map->i]) == 1 ? ft_bloc1(map) : (void)0;
	(map->nbr[map->i]) == 2 ? ft_bloc2(map) : (void)0;
	(map->nbr[map->i]) == 3 ? ft_bloc3(map) : (void)0;
	(map->nbr[map->i]) == 4 ? ft_bloc4(map) : (void)0;
	(map->nbr[map->i]) == 5 ? ft_bloc5(map) : (void)0;
	(map->nbr[map->i]) == 6 ? ft_bloc6(map) : (void)0;
	(map->nbr[map->i]) == 7 ? ft_bloc7(map) : (void)0;
	(map->nbr[map->i]) == 8 ? ft_bloc8(map) : (void)0;
	(map->nbr[map->i]) == 9 ? ft_bloc9(map) : (void)0;
	(map->nbr[map->i]) == 10 ? ft_bloc10(map) : (void)0;
	(map->nbr[map->i]) == 11 ? ft_bloc11(map) : (void)0;
	(map->nbr[map->i]) == 12 ? ft_bloc12(map) : (void)0;
	(map->nbr[map->i]) == 13 ? ft_bloc13(map) : (void)0;
	(map->nbr[map->i]) == 14 ? ft_bloc14(map) : (void)0;
	(map->nbr[map->i]) == 15 ? ft_bloc15(map) : (void)0;
	(map->nbr[map->i]) == 16 ? ft_bloc16(map) : (void)0;
	(map->nbr[map->i]) == 17 ? ft_bloc17(map) : (void)0;
	(map->nbr[map->i]) == 18 ? ft_bloc18(map) : (void)0;
}

int		malloc_fill(t_rendu *map)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (!(map->map = (char**)malloc(sizeof(char*) * (map->len + 1))))
			return (0);
	while (i < map->len)
	{
		if (!(map->map[i++] = (char*)malloc(sizeof(char) * (map->len + 1))))
			return (0);
	}
	i = 0;
	while (i < map->len)
	{
		while(k < map->len)
			map->map[i][k++] = '.';
		map->map[i][++k] = '\0';
		k = 0;
		i++;
	}
	map->map[i] = NULL;
	return (1);
}

int		check(t_rendu *map)
{
	int i;
	int k;

	i = 0;
	k = 0;
	//ft_putchar('a');
	while (map->map[i] != NULL)
	{	
		while(map->map[i][k] != '\0')
		{
			if (map->map[i][k] == '1')
				return(-1);
			k++;
		}
		k = 0;
		i++;		
	}
	return (0);
}

void	print(t_rendu *map)
{
	int i;

	i = 0;
	while (map->map[i])
	{	
		ft_putstr(map->map[i++]);
		ft_bn();
	}
}


int		parser(t_parse parsing,t_rendu *parse)
{
	t_bloc t;

	remplissage(&t,parse);
	//while (!())
	//{
		
	//}
	parse->nbr[parse->k] = -1;
	if (parse->k == ((parse->cat + 1) / 4 ))
		return (0);
	return (0);
}

