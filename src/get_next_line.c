/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nevadeon <nevadeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:23:03 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/22 22:59:23 by nevadeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

char	*ft_strcjoinfree(char *str1, char *str2, char c)
{
	char	*output;

	output = malloc((ft_strclen(str1, c, 1) + ft_strclen(str2, c, 1) + 1));
	ft_strcpy(output, str1);
	ft_strccat(output, str2, c, true);
	free(str1);
	return (output);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = {0};
	char		*line;
	ssize_t		read_bytes;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strcdup(buffer, '\n', true);
	while (ft_strchr(buffer, '\n') == NULL)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1 || (read_bytes == 0 && line[0] == '\0'))
			return (free(line), buffer[0] = '\0', NULL);
		buffer[read_bytes] = '\0';
		if (read_bytes == 0)
			break ;
		line = ft_strcjoinfree(line, buffer, '\n');
	}
	ft_strcpy(buffer, buffer + ft_strclen(buffer, '\n', true));
	return (line);
}
