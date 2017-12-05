/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:52:31 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/09 19:21:21 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	int		i;

	i = '0';
	while (i <= '9')
	{
		if (i == c)
			return (1);
		i++;
	}
	return (0);
}
