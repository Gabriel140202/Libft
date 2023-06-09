/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 09:49:12 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/18 10:13:45 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join_strings(char const *s1, char const *s2, char *string)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		string[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		string[j] = s2[i];
		i++;
		j++;
	}
	string[j] = '\0';
	return (string);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	final_size;
	char	*string;

	final_size = ft_strlen(s1) + ft_strlen(s2);
	string = (char *)malloc((final_size * sizeof(char)) + 1);
	if (!string)
		return (NULL);
	string = ft_join_strings(s1, s2, string);
	return (string);
}
