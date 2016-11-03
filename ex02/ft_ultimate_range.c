/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:38:35 by mgould            #+#    #+#             */
/*   Updated: 2016/11/03 15:27:09 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*strints;

	if (min >= max)
		return (0);
	i = 0;
	strints = (int*)malloc(sizeof(int) * (max - min));
	while ((i + min) < max)
	{
		strints[i] = min + i;
		i++;
	}
	return (strints);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min) * sizeof(int);
	*range = ft_range(min, max);
	return (size);
}
