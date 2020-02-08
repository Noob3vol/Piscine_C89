/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:04:36 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/13 00:50:51 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(char symbol)
{
	if (symbol >= 'A' && symbol <= 'Z')
		return (1);
	return (0);
}

int		ft_islower(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
		return (1);
	return (0);
}

int		ft_isalphanum(char symbol)
{
	if ((symbol >= 'A' && symbol <= 'Z')
			|| (symbol >= '0' && symbol <= '9')
			|| (symbol >= 'a' && symbol <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (ft_islower(str[0]))
		str[0] = str[0] + ('A' - 'a');
	while (str[i])
	{
		if (!(ft_isalphanum(str[i - 1])) && ft_islower(str[i]))
		{
			str[i] = str[i] + ('A' - 'a');
		}
		if (ft_isalphanum(str[i - 1]) && ft_isupper(str[i]))
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}
