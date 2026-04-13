/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:10 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 14:51:55 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
    int i,  sinal,  resultado;

    i, resultado = 0;
    sinal = 1;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
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