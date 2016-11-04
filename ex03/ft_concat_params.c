/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:23:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/03 18:19:33 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat_nl(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dest[i] = '\n';
	i++;
	while (*(src + j))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int		get_count(char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	j = 0;
	len = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			len++;
			j++;
		}
		i++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		j;
	char	*string;
	int		len;

	len = get_count(argv);
	j = 0;
	if (argc == 1)
		return (NULL);
	if (argc == 2)
		return (argv[1]);
	string = (char *)malloc(sizeof(char) * len);
	while (argv[1][j])
	{
		string[j] = argv[1][j];
		j++;
	}
	j = 2;
	while (argv[j])
	{
		ft_strcat_nl(string, argv[j]);
		j++;
	}
	return (string);
}
