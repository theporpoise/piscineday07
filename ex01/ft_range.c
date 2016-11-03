/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:47:29 by mgould            #+#    #+#             */
/*   Updated: 2016/11/02 20:28:42 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*strints;

	if (max <= min)
		return (NULL);
	i = 0;
	strints = (int*)malloc(sizeof(int) * (max - min));
	while ((i + min) < max)
	{
		strints[i] = min + i;
		i++;
	}
	return (strints);
}
