/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:23:03 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/15 17:02:38 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libndav.h"

char	*ft_strcjoinfree(char *str1, char *str2, char c)
{
	char	*output;

	output = (char *) malloc((ft_strclen(str1, c) + ft_strclen(str2, c) + 1));
	ft_strcpy(output, str1);
	ft_strccat(output, str2, c);
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
	line = ft_strcdup(buffer, '\n');
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
	ft_strcpy(buffer, buffer + ft_strclen(buffer, '\n'));
	return (line);
}
