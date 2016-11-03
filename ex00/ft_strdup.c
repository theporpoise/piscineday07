/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:13:31 by mgould            #+#    #+#             */
/*   Updated: 2016/11/02 17:44:03 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
	{
		i++;
	}
	str = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
