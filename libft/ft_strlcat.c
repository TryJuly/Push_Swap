/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strieste <strieste@student.42.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:02:54 by strieste          #+#    #+#             */
/*   Updated: 2025/10/09 15:57:23 by strieste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	save;
	size_t	count;
	size_t	count_dest;
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (n == 0)
		return (len_src);
	save = ft_strlen(dest);
	len_dest = save;
	count = 0;
	if (n <= len_dest)
		return (n + len_src);
	count_dest = len_dest;
	while (count < (n - 1) && src[count] && count_dest < (n - 1))
	{
		dest[count_dest] = src[count];
		count_dest++;
		count++;
	}
	dest[count_dest] = '\0';
	return (save + len_src);
}
