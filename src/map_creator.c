/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_creator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:22:43 by ade-verd          #+#    #+#             */
/*   Updated: 2017/12/04 14:51:30 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** ft_create_empty_map
** Creates empty map filled with (side*side) '.' and side '/n'.
*/

char	*ft_create_empty_map(int side)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	len = side * side + side;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		j = 0;
		while (j < side)
		{
			str[i] = '.';
			i++;
			j++;
		}
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** ft_find_size_map
** Counting number of '\n' to gets the size of the map.
*/

int		ft_find_size_map(char *map)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			size++;
	}
	return (size);
}
