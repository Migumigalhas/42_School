/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:57:23 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/12 12:57:23 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = sinal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = resultado * 10 + (str[i] - '0');
		i++;
	}
	return (resultado * sinal);
}
