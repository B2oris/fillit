
#include "fillit.h"

// I
int	ft_bloc0(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
	 	map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 2][map->y] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x + 3][map->y] == '.')
		map->map[map->x + 3][map->y] = map->letter;
	else
		map->map[map->x + 3][map->y] = '1';
	return (0);
}

int	ft_bloc1(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	if (map->map[map->x][map->y + 3] == '.')
		map->map[map->x][map->y + 3] = map->letter;
	else
		map->map[map->x][map->y + 3] = '1';
	return (0);
}

// T
int	ft_bloc2(t_fill *map)
{
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y + 1] = map->letter;
	else
		map->map[map->x + 2][map->y + 1] = '1';
	return (0);
}

int	ft_bloc3(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	return (0);
}

int	ft_bloc4(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 2][map->y] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	return (0);
}


int	ft_bloc5(t_fill *map)
{
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 2] == '.')
		map->map[map->x + 1][map->y + 2] = map->letter;
	else
		map->map[map->x + 1][map->y + 2] = '1';
	return (0);
}


// O
int	ft_bloc6(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	return (0);
}


// S

int	ft_bloc7(t_fill *map)
{
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	return (0);
}


int	ft_bloc8(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y + 1] = map->letter;
	else
		map->map[map->x + 2][map->y + 1] = '1';
	return (0);
}

// Z


int	ft_bloc9(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 2] == '.')
		map->map[map->x + 1][map->y + 2] = map->letter;
	else
		map->map[map->x + 1][map->y + 2] = '1';
	return (0);
}































int	ft_bloc10(t_fill *map)
{
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 2][map->y] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	return (0);
}


// J
int	ft_bloc11(t_fill *map)
{
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y + 1] = map->letter;
	else
		map->map[map->x + 2][map->y + 1] = '1';
	return (0);
}

int	ft_bloc12(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 2] == '.')
		map->map[map->x + 1][map->y + 2] = map->letter;
	else
		map->map[map->x + 1][map->y + 2] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	return (0);
}

int	ft_bloc13(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 2][map->y] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	return (0);
}

int	ft_bloc14(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	if (map->map[map->x + 1][map->y + 2] == '.')
		map->map[map->x + 1][map->y + 2] = map->letter;
	else
		map->map[map->x + 1][map->y + 2] = '1';
	return (0);
}




// L
int	ft_bloc15(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 2][map->y] == '.')
		map->map[map->x + 2][map->y] = map->letter;
	else
		map->map[map->x + 2][map->y] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y + 1] = map->letter;
	else
		map->map[map->x + 2][map->y + 1] = '1';
	return (0);
}

int	ft_bloc16(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	if (map->map[map->x +  1][map->y] == '.')
		map->map[map->x +  1][map->y] = map->letter;
	else
		map->map[map->x +  1][map->y] = '1';
	return (0);
}

int	ft_bloc17(t_fill *map)
{
	if (map->map[map->x][map->y] == '.')
		map->map[map->x][map->y] = map->letter;
	else
		map->map[map->x][map->y] = '1';
	if (map->map[map->x][map->y + 1] == '.')
		map->map[map->x][map->y + 1] = map->letter;
	else
		map->map[map->x][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 2][map->y + 1] == '.')
		map->map[map->x + 2][map->y + 1] = map->letter;
	else
		map->map[map->x + 2][map->y + 1] = '1';
	return (0);
}

int	ft_bloc18(t_fill *map)
{
	if (map->map[map->x + 1][map->y] == '.')
		map->map[map->x + 1][map->y] = map->letter;
	else
		map->map[map->x + 1][map->y] = '1';
	if (map->map[map->x + 1][map->y + 1] == '.')
		map->map[map->x + 1][map->y + 1] = map->letter;
	else
		map->map[map->x + 1][map->y + 1] = '1';
	if (map->map[map->x + 1][map->y + 2] == '.')
		map->map[map->x + 1][map->y + 2] = map->letter;
	else
		map->map[map->x + 1][map->y + 2] = '1';
	if (map->map[map->x][map->y + 2] == '.')
		map->map[map->x][map->y + 2] = map->letter;
	else
		map->map[map->x][map->y + 2] = '1';
	return (0);
}













//CHECKER//













int		check_bloc0(t_fill *map)
{
	//if (!map->map || !map->map[map->x])
		//return (-1);
	//if (!(map->map[map->x][map->y]) || !(map->map[map->x + 1][map->y]) || !(map->map[map->x + 2][map->y]) || !(map->map[map->x + 3][map->y]))
	if (map->x + 3 >= map->len || map->y >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 2][map->y] != '.' || map->map[map->x + 3][map->y] != '.')
		return (-1);
	return (0);
}

int		check_bloc1(t_fill *map)
{
	if (map->x >= map->len || map->y + 3 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x][map->y + 2] != '.' || map->map[map->x][map->y + 3] != '.')
		return (-1);
	return (0);
}

// T
int		check_bloc2(t_fill *map)
{
	if (map->x + 2 >= map->len || map->y + 1>= map->len)
		return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 2][map->y + 1] != '.')
		return (-1);
	return (0);
}

int		check_bloc4(t_fill *map)
{
	if (map->x + 2>= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 2][map->y] != '.' || map->map[map->x + 1][map->y + 1] != '.')
		return (-1);
	return (0);
}

int		check_bloc3(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x][map->y + 2] != '.')
		return (-1);
	return (0);
}

int		check_bloc5(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 1][map->y + 2] != '.')
		return (-1);
	return (0);
}


// O
int		check_bloc6(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x + 1][map->y + 1] != '.')
		return (-1);
	return (0);
}


// S

int		check_bloc7(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x][map->y + 2] != '.')
		return (-1);
	return (0);
}


int		check_bloc8(t_fill *map)
{
	if (map->x + 2 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 2][map->y + 1] != '.')
		return (-1);
	return (0);
}

// Z


int		check_bloc9(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 1][map->y + 2] != '.')
		return (-1);
	return (0);
}









int		check_bloc10(t_fill *map)
{
	if (map->x + 2 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x + 2][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x][map->y + 1] != '.')
		return (-1);
	return (0);
}


// J
int		check_bloc14(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x][map->y + 2] != '.' || map->map[map->x + 1][map->y + 2] != '.')
		return (-1);
	return (0);
}

int		check_bloc13(t_fill *map)
{
	if (map->x + 2>= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 2][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
		return (-1);
	return (0);
}

int		check_bloc12(t_fill *map)
{
	if (map->x + 1>= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 2] != '.' || map->map[map->x + 1][map->y] != '.')
		return (-1);
	return (0);
}

int		check_bloc11(t_fill *map)
{
	if (map->x + 2>= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y + 1] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 2][map->y] != '.')
		return (-1);
	return (0);
}

// L
int		check_bloc15(t_fill *map)
{
	if (map->x + 2 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x + 1][map->y] != '.')
	 	return (-1);
	if (map->map[map->x + 2][map->y] != '.' || map->map[map->x + 2][map->y + 1] != '.')
		return (-1);
	return (0);
}

int		check_bloc16(t_fill *map)
{
	if (map->x + 1 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x][map->y + 2] != '.' || map->map[map->x + 1][map->y] != '.')
		return (-1);
	return (0);
}

int		check_bloc17(t_fill *map)
{
	if (map->x + 2 >= map->len || map->y + 1 >= map->len)
		return (-1);
	if (map->map[map->x][map->y] != '.' || map->map[map->x][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 1] != '.' || map->map[map->x + 2][map->y + 1] != '.')
		return (-1);
	return (0);
}

int		check_bloc18(t_fill *map)
{
	if (map->x + 1>= map->len || map->y + 2 >= map->len)
		return (-1);
	if (map->map[map->x + 1][map->y] != '.' || map->map[map->x + 1][map->y + 1] != '.')
	 	return (-1);
	if (map->map[map->x + 1][map->y + 2] != '.' || map->map[map->x][map->y + 2] != '.')
		return (-1);
	return (0);
}
