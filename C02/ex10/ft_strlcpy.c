/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:04:21 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/15 06:28:02 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (size > 1)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	if (size == 1)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
