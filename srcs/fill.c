/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beborch <beborch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 22:38:07 by beborch           #+#    #+#             */
/*   Updated: 2018/02/22 04:41:18 by beborch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


int     error(void)
{
    write(1, "error\n", 7);
    return (-1);
}

void    init_struct(t_fill *fill)
{
    ft_strcpy(fill->b[0],"#...#...#...#");
	ft_strcpy(fill->b[1],"####");
	ft_strcpy(fill->b[2],"#..##...#");
	ft_strcpy(fill->b[3],"###..#");
	ft_strcpy(fill->b[4],"#...##..#");
	ft_strcpy(fill->b[5],"#..###");
	ft_strcpy(fill->b[6],"##..##");
	ft_strcpy(fill->b[7],"##.##");
	ft_strcpy(fill->b[8],"#...##...#");
    ft_strcpy(fill->b[9],"##...##");
    ft_strcpy(fill->b[10],"#..##..#");
	ft_strcpy(fill->b[11],"#...#..##");
	ft_strcpy(fill->b[12],"#...###");
    ft_strcpy(fill->b[13],"##..#...#");
    ft_strcpy(fill->b[14],"###...#");    
	ft_strcpy(fill->b[15],"#...#...##");
	ft_strcpy(fill->b[16],"###.#");
	ft_strcpy(fill->b[17],"##...#...#");
	ft_strcpy(fill->b[18],"#.###");
}

int     puttin2(t_fill *map)
{
	if (map->nbr[map->i] == 9)
        return (check_bloc9(map) == 0 ? ft_bloc9(map) : -1);
	if (map->nbr[map->i] == 10)
        return ( check_bloc10(map) == 0 ? ft_bloc10(map) : -1);
	if (map->nbr[map->i] == 11)
        return ( check_bloc11(map) == 0 ? ft_bloc11(map) : -1);
	if (map->nbr[map->i] == 12)
        return ( check_bloc12(map) == 0 ? ft_bloc12(map) : -1);
	if (map->nbr[map->i] == 13)
        return ( check_bloc13(map) == 0 ? ft_bloc13(map) : -1);
	if (map->nbr[map->i] == 14)
        return ( check_bloc14(map) == 0 ? ft_bloc14(map) : -1);
	if (map->nbr[map->i] == 15)
        return ( check_bloc15(map) == 0 ? ft_bloc15(map) : -1);
	if (map->nbr[map->i] == 16)
        return ( check_bloc16(map) == 0 ? ft_bloc16(map) : -1);
	if (map->nbr[map->i] == 17)
        return ( check_bloc17(map) == 0 ? ft_bloc17(map) : -1);
	if (map->nbr[map->i] == 18)
        return ( check_bloc18(map) == 0 ? ft_bloc18(map) : -1);
    return (0);
}

int 	puttin(t_fill *map)
{ 
    if (map->nbr[map->i] >= 9)
        if (puttin2(map) == -1)
            return (-1);
    if (map->nbr[map->i] == 0)
        return (check_bloc0(map) == 0 ? ft_bloc0(map) : -1);
	if (map->nbr[map->i] == 1)
        return (check_bloc1(map) == 0 ? ft_bloc1(map) : -1);
	if (map->nbr[map->i] == 2)
        return (check_bloc2(map) == 0 ? ft_bloc2(map) : -1);
	if (map->nbr[map->i] == 3)
        return (check_bloc3(map) == 0 ? ft_bloc3(map) : -1);
	if (map->nbr[map->i] == 4)
        return (check_bloc4(map) == 0 ? ft_bloc4(map) : -1);
	if (map->nbr[map->i] == 5)
        return (check_bloc5(map) == 0 ? ft_bloc5(map) : -1);
	if (map->nbr[map->i] == 6)
        return (check_bloc6(map) == 0 ? ft_bloc6(map) : -1);
	if (map->nbr[map->i] == 7)
        return (check_bloc7(map) == 0 ? ft_bloc7(map) : -1);
	if (map->nbr[map->i] == 8)
        return (check_bloc8(map) == 0 ? ft_bloc8(map) : -1);
    return (0);
}

void    print(t_fill *fill)
{
    int i = 0;
    while(fill->map[i])
    {
        ft_putstr(fill->map[i++]);
        ft_bn();
    }
}

void    add_list(t_chaine **head, t_chaine **body, t_fill **fill)
{
    t_chaine *prev = NULL;
    if (!(*head))
    {
        (*body) = (t_chaine*)malloc(sizeof(t_chaine));
        *head = *body;
    }
    else
    {
        prev = *body;
        *body = (*body)->next;
        *body = (t_chaine*)malloc(sizeof(t_chaine));
        prev->next = *body;
    }
    (*body)->str = ft_strdup((*fill)->tmp);
    (*body)->next = NULL;
    (*body)->prev = prev;
}

int     len_count(t_chaine *head)
{
    int i;

    i = 0;
    while (head)
    {
        i++;
        head = head->next;
    }
    return (i);
}

void    cat_list(t_fill *fill)
{
    t_chaine *body = NULL;
    fill->list = NULL;
    fill->i = 0;
    fill->j = 0;
    while(fill->buff[fill->i] != '\0')
    {
        while (fill->buff[fill->i] == '.' || fill->buff[fill->i] == '\n')
            fill->i++;
        while (fill->buff[fill->i] != '\0')
        {
            while (fill->buff[fill->i] == '\n')
                fill->i++;
            fill->tmp[fill->j] = fill->buff[fill->i];
            fill->j++;
            fill->i++;
            if ((fill->buff[fill->i] == '\n' && fill->buff[fill->i + 1] == '\n') || fill->buff[fill->i] == '\0')
                break;
        } 
        fill->tmp[fill->j] = '\0';
        add_list(&fill->list, &body, &fill);
        fill->j = 0;

        while (fill->buff[fill->i] == '\n')
            fill->i++;
    }
}

void    malloc_filling(t_fill *fill)
{
    fill->alloc_x = 0;
    fill->alloc_y = 0;
    if (!(fill->map = (char **)malloc(sizeof(char *) * (fill->len + 1))))
        return ;
    while (fill->alloc_x < fill->len)
    {
        if (!(fill->map[fill->alloc_x++] = (char *)malloc(sizeof(char) * (fill->len + 1))))
            return ;
    }    
    fill->alloc_x = 0;
    while (fill->alloc_x < fill->len)
    {
        while (fill->alloc_y < fill->len)
            fill->map[fill->alloc_x][fill->alloc_y++] = '.';
        fill->map[fill->alloc_x][++fill->alloc_y] = '\0';
        fill->alloc_y = 0;
        fill->alloc_x++;
    }
    fill->map[fill->alloc_x] = NULL;
}

int     dot_check(t_fill *fill)
{
    int i;
    int k;
    int tmp;

    i = 0;
    k = 0;
    tmp = 0;
    while(fill->map[i][k] != '\0')
        k++;
    k--;
    while(fill->map[i][k] == '.')
    {
        i++;
        if (i == fill->len)
            break ;
    }
    if (i != fill->len)
        return (0);
    i--;
    //ft_putstr(fill->map[i]);
    while (k > 0 && fill->map[i][k] == '.')
        k--;
    if (k == 0)
        return (-1);
    return (0);
}

int     fill_comp(t_fill *fill)
{
    int i;
    int j;
    int k;
    int l;
    l = 0;
    k = 0;
    i = 0;
    while ((fill->list))
    {    
        j = 0;
        k = 0;
        while ((fill->b[j][k] != '\0') && j < 19)
        {
            i = 0;
            while ((fill->list->str[i] == fill->b[j][k]) && fill->b[j][k] != '\0')
            {
                i++;
                k++;
            }
            if (fill->b[j][k] != '\0')
            {
                j++;
                k = 0;
            }
        }
        if (j == 19)
            return(-1);
        fill->nbr[l] = j;
        l++;
        fill->list = fill->list->next;
    }

    fill->nbr[l] = -1;
    return (0);
}

int     finder_check(t_fill *fill)
{
    init_struct(fill);
    if (fill_comp(fill) == -1)
    {    
        ft_putstr("error\n");
        return (-1);
    }
    return (0);
}

int   map_check(t_fill *fill)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = 0;
    tmp = 0;
    while (fill->map[i] != NULL)
    {
        while (fill->map[i][j] != '\0')
        {
            if (fill->map[i][j] == fill->letter)
            {
                return (0);
            }
            j++;
        }
    i++;
    j = 0;
    }
    return (-1);
}

int     putter(t_fill *fill)
{
    fill->k = 0;
    fill->i = 0;
    fill->x = 0;
    fill->y = 0;
    fill->letter = 'a';
    fill->tmp[0] = -1;
    ft_putnbr(fill->len);
    while(fill->nbr[fill->i] != -1)
    {
        while (puttin(fill) == -1)
        {
            fill->y++;
            if (fill->y >= fill->len)
            {
                fill->x++;
                fill->y = 0;
            }
            if (fill->x > fill->len)
            {
                //fill->len++;
                //malloc_filling(fill);
                //return (putter(fill));
                fill->tmp[fill->k] = fill->i;
                fill->tmp[fill->k + 1] = -1; 
                fill->i++;
            }
        }
        fill->y = 0;
        fill->x = 0;
        fill->letter++;
        fill->i++;
    }
    return (0);
}


int    solver(t_fill *fill)
{
    malloc_filling(fill);
    if (finder_check(fill) == -1)
        return (-1);
    putter(fill);
    //while (dot_check(fill) == -1)
    //{
        //fill->len--;
        //ft_putstr("len :");
        //ft_putnbr(fill->len);
        //ft_bn();
        //print(fill);
        //malloc_filling(fill);
        //putter(fill);
    //}
    //putter(fill);
    return (0);
}

int     main(int argc, char *argv[])
{
    t_fill  fill;

    if (argc != 2)
        return(error());
    fill.file = open (argv[1], O_RDONLY);
    fill.ret = read(fill.file, fill.buff, BUFF_SIZE);
    fill.buff[fill.ret] = '\0';
    ft_putchar('a');
    cat_list(&fill);
    ft_putchar('b');
    fill.len = len_count(fill.list);
    ft_putchar('c');
    ft_bn();
    if (solver(&fill) == -1)
        return (0);
    ft_putstr("done\n");
    print(&fill);
}