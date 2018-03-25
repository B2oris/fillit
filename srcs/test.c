#include "fillit.h"

static void init_map(size_t map_size, char map[MAX_MAP_SIZE][MAX_MAP_SIZE])
{
    t_size_t2 i;

    i.y = 0;
    while (i.y < MAX_MAP_SIZE)
    {
        i.x = 0;
        while (i.x < MAX_MAP_SIZE)
        {
            if (i.x < map_size && i.y < map_size)
                map[i.y][i.x] = '.';
            else
                map[i.y][i.x] = '#';
            i.x++;
        }
        i.y++;
    }
}

int     check_place(char *piece, t_size_t2 *pos, char map[MAX_MAP_SIZE][MAX_MAP_SIZE])
{
    size_t i;

    i = 0;
    while (i < 16)
    {
        if (piece[i] == '#' && map[pos->y + (i / 4)][pos->x + (i % 4)] != '.')
            return (0);
        i++;
    }
    return (1);
}

void    place(char *piece, t_size_t2 *pos, char map[MAX_MAP_SIZE][MAX_MAP_SIZE], char letter)
{
    size_t i;

    i = 0;
    while (i < 16)
    {
        if (piece[i] == '#' && map[pos->y + (i / 4)][pos->x + (i % 4)] != '#')
            map[pos->y + (i / 4)][pos->x + (i % 4)] = letter;
        i++;
    }
}

int    check_coord(t_size_t2 *coord, size_t map_size)
{
    if (coord->x + 1 < map_size)
        return (1);
    else if (coord->y + 1 < map_size)
        return (1);
    return (0);
}

void    update_coord(t_size_t2 *coord, size_t map_size)
{
    if (coord->x + 1 < map_size)
        coord->x++;
    else if (coord->y + 1 <map_size)
    {
        coord->x = 0;
        coord->y++;
    }
    else
    {
        coord->x = 0;
        coord->y = 0;
    }
}

static void    solver(t_fill *fill)
{
    static t_size_t2 coord[MAX_PIECES];

    fill->map_size = 2;
    while (fill->map_size * fill->map_size < fill->num_piece * 4)
        fill->map_size++;
    init_map(fill->map_size, fill->map);
    fill->piece = 0;
    while (fill->piece < fill->num_piece)
    {
        if (check_place(fill->parsing[fill->piece], &coord[fill->piece], fill->map))
        {
            place(fill->parsing[fill->piece], &coord[fill->piece], fill->map, 'A' + fill->piece);
            fill->piece++;
        }
        else if (check_coord(&coord[fill->piece], fill->map_size))
            update_coord(&coord[fill->piece], fill->map_size);
        else
        {
            update_coord(&coord[fill->piece], fill->map_size);
            if (fill->piece == 0)
            {
                fill->map_size++;
                init_map(fill->map_size, fill->map);
            }
            else
            {
                fill->piece--;
                place(fill->parsing[fill->piece], &coord[fill->piece], fill->map, '.');
                update_coord(&coord[fill->piece], fill->map_size);
            }
        }
    }
}


size_t     len_count(t_chaine *head)
{
    size_t i;

    i = 0;
    while (head)
    {
        i++;
        head = head->next;
    }
    return (i);
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

void    parse(t_fill *fill)
{
    fill->i = 0;
    fill->j = 0;
    fill->num_piece = 0;
    fill->l = 0;
    while (fill->buff[fill->i] != '\0')
    {
        while (fill->buff[fill->i] == '\n')
        {
            //while (fill->buff[fill->i] == '\n')
            fill->i++;
            fill->j++;
        }
        if (fill->j > 4 )
        {
            fill->parsing[fill->num_piece][fill->l] = '\0';
            fill->num_piece++;
            fill->j = 0;
            fill->l = 0;
        }
        while (fill->buff[fill->i] != '\n' && fill->buff[fill->i] != '\0')
        {
            fill->parsing[fill->num_piece][fill->l] = fill->buff[fill->i];
            fill->parsing[fill->num_piece][fill->l + 1] = '\0';
            fill->i++;
            fill->l++;
        }
    }
    fill->parsing[fill->num_piece + 1][0] = '\0';
}


void print_map(char map[MAX_MAP_SIZE][MAX_MAP_SIZE], size_t map_size)
{
    t_size_t2 i;

    i.y = 0;
    while (i.y < map_size)
    {
        i.x = 0;
        while (i.x < map_size)
        {
            write(1, &map[i.y][i.x], 1);
            i.x++;
        }
        write(1, "\n", 1);
        i.y++;
    }
}

void    ccpy(t_fill *fill, char *tmp)
{
    int i;

    i = 0;
    while (tmp[i] != '\0')
    {
        fill->parsing[fill->l][i] = tmp[i];
        i++;
    }
}

int     check_parse(t_fill *fill)
{
    fill->i = 0;
    fill->j = 0;
    fill->k = 0;
    fill->l = 0;
    fill->tmp = 0;
    while (fill->parsing[fill->l][0] != '\0')
    {
        while (fill->parsing[fill->l][fill->i] != '\0' && (fill->i != 16))
        {
            while (fill->parsing[fill->l][fill->i] == '.')
                fill->i++;
            while (g_pieces[fill->j][fill->k] == '.')
                fill->k++;
            while (fill->parsing[fill->l][fill->i] != '\0' && (fill->parsing[fill->l][fill->i] == g_pieces[fill->j][fill->k]))
            {
                fill->i++;
                fill->k++;    
            }
            if (fill->parsing[fill->l][fill->i] != '\0')
            {
                fill->j++;
                fill->i = 0;
                fill->k = 0;
            }
            if (fill->j == 19)
            {
                //ft_putnbr(fill->l);
                //ft_bn();
                //ft_putstr(fill->parsing[fill->l]);
                return(-1);
            }
        }
        if (fill->i != 16)
            return (-1);
        ccpy(fill, (char *)g_pieces[fill->j]);
        fill->l++;
        fill->i = 0;
        fill->k = 0;
        fill->j = 0;
    }
    return (1);
}

int     error(void)
{
    write(1, "error\n", 7);
    return (-1);
}

int     main(int argc, char *argv[])
{
    t_fill fill;

    if (argc != 2)
        return(error());
    
    fill.file = open (argv[1], O_RDONLY);
    fill.ret = read(fill.file, fill.buff, BUFF_SIZE);
    fill.buff[fill.ret] = '\0';


    parse(&fill);
    //ft_putnbr(fill.num_piece);
    if (check_parse(&fill) == -1)
        return (error());
    solver(&fill);
    print_map(fill.map,fill.map_size);   
}