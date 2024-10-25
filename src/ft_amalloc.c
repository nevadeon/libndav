/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arena.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evan <evan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:03:28 by ndavenne          #+#    #+#             */
/*   Updated: 2024/10/25 17:49:11 by evan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define DEFAULT_BLOCK_SIZE 65536
typedef unsigned char t_bytes;
typedef struct s_arena
{
	t_bytes			*block;
	struct s_arena	*next;
}	t_arena;

// void	*ft_arena(size_t size)
// {
// 	static t_bytes	ptr[DEFAULT_BLOCK_SIZE] = {0};
// 	static size_t	pos = 0;

// 	if (pos + size > DEFAULT_BLOCK_SIZE)
// 		return (NULL);
// 	pos += size;
// 	return (ptr + pos - size);
// }

void	*arena_origin(void)
{
	static t_arena *origin = NULL;

	if (origin == NULL)
	{
		origin = calloc(1, sizeof(t_arena));
		if (origin == NULL)
			return (NULL);
		origin->block = malloc(DEFAULT_BLOCK_SIZE);
		if (origin->block == NULL)
			return (NULL);
	}
	return (origin);
}

t_arena	*ft_lstlast(t_arena *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_arena	*new_block(t_arena *node, size_t size)
{
	node->next = calloc(1, sizeof(t_arena));
	if (node->next == NULL)
		return (NULL);
	node->next->block = malloc(size);
	if (node->next->block == NULL)
		return (NULL);
	return (node->next);
}

void	*ft_arena(size_t size)
{
	t_arena			*node;
	size_t			block_size;
	static size_t	pos = 0;

	node = ft_lstlast(arena_origin());
	if(node == NULL)
		return (NULL);
	block_size = DEFAULT_BLOCK_SIZE;
	if (pos + size > block_size)
	{
		while (size > block_size)
			block_size *= 2;
		node = new_block(node, block_size);
		if(node == NULL)
			return (NULL);
		pos = 0;
	}
	pos += size;
	return (node->block + pos - size);
}

int main(void)
{
	char **tab;
	tab = (char **)ft_arena(sizeof(char *) * 5);
	int i = 0;
	while (i < 5)
	{
		tab[i] = (char *)ft_arena(20);
		tab[i][0] = 't';
		tab[i][1] = '\0';
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
