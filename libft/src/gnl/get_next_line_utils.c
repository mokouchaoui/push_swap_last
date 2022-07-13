/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:56:57 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/17 17:45:36 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/get_next_line.h"

size_t	ft_strlen1(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strjoin1(char *str1, char *str2)
{
	size_t	index;
	size_t	count;
	char	*result;

	if (!str1)
	{
		str1 = (char *)malloc(1 * sizeof(char));
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (NULL);
	result = malloc ((ft_strlen1(str1) + ft_strlen1(str2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	index = -1;
	count = 0;
	if (str1)
		while (str1[++index] != '\0')
			result[index] = str1[index];
	while (str2[count] != '\0')
		result[index++] = str2[count++];
	result[ft_strlen1(str1) + ft_strlen1(str2)] = '\0';
	free(str1);
	return (result);
}

char	*ft_strchr1(char *string, int n)
{
	int	index;

	index = 0;
	if (!string)
		return (0);
	if (n == '\0')
		return ((char *)&string[ft_strlen1(string)]);
	while (string[index] != '\0')
	{
		if (string[index] == (char)n)
			return ((char *)&string[index]);
		index++;
	}
	return (0);
}
