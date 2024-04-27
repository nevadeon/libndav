/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <ndavenne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:08:51 by ndavenne          #+#    #+#             */
/*   Updated: 2024/04/12 16:08:54 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strccat(char *dest, const char *src, char c)
{
	while (*dest)
		dest++;
	while (*src && *src != c)
		*dest++ = *src++;
	if (*src == c)
		*dest++ = *src++;
	*dest = '\0';
}
