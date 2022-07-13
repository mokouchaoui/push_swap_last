/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:06:22 by mokoucha          #+#    #+#             */
/*   Updated: 2022/06/17 17:44:55 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/get_next_line.h"

char	*ft_update_buffer(char	*buffer)
{
	int		index;
	int		count;
	char	*new_buffer;

	index = 0;
	while (buffer[index] && buffer[index] != '\n')
		index++;
	if (!buffer[index])
	{
		free(buffer);
		return (NULL);
	}
	new_buffer = malloc(sizeof(char) * (ft_strlen1(buffer) - index));
	if (!new_buffer)
		return (NULL);
	index++;
	count = 0;
	while (buffer[index])
		new_buffer[count++] = buffer[index++];
	*(new_buffer + count) = '\0';
	free(buffer);
	return (new_buffer);
}

char	*take_line(char *buffer)
{
	int		index;
	char	*line;

	index = 0;
	if (!buffer[index])
		return (NULL);
	while (buffer[index] && buffer[index] != '\n')
		index++;
	line = (char *)malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	index = 0;
	while (buffer[index] && buffer[index] != '\n')
	{
		*(line + index) = buffer[index];
		index++;
	}
	if (buffer[index] == '\n')
	{
		*(line + index) = buffer[index];
		index++;
	}
	*(line + index) = '\0';
	return (line);
}

char	*ft_read_backup(int fd, char *text_backup)
{
	int		bytes;
	char	*text;

	bytes = 1;
	text = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!text)
		return (NULL);
	while ((!(ft_strchr1(text_backup, '\n')) && bytes != 0))
	{
		bytes = read(fd, text, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(text);
			return (NULL);
		}
		text[bytes] = '\0';
		text_backup = ft_strjoin1(text_backup, text);
	}
	free(text);
	return (text_backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = ft_read_backup(fd, buffer);
	if (!buffer)
		return (NULL);
	line = take_line(buffer);
	buffer = ft_update_buffer(buffer);
	return (line);
}
