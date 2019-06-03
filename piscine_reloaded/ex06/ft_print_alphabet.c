/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentinmartinez <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 09:17:49 by quentinma         #+#    #+#             */
/*   Updated: 2018/02/05 10:08:26 by quentinma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char chr;
    chr = 'a';
    while (chr <= 'z')
    {
        ft_putchar(chr);
        chr++;
    }
}
