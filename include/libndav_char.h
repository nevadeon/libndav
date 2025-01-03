/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libndav_char.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndavenne <github@noedavenne.aleaas.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:02:58 by ndavenne          #+#    #+#             */
/*   Updated: 2025/01/03 19:52:22 by ndavenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBNDAV_CHAR_H
# define LIBNDAV_CHAR_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *s);
char	*ft_itoa(int n);

#endif