/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihhan <junehan.dev@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:24:48 by jihhan            #+#    #+#             */
/*   Updated: 2020/09/03 14:27:35 by jihhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isblank(int c)
{
    return (
            (
             (c == '\t') ||
             (c == '\v') ||
             (c == ' ')
            ) ? 
            1 : 0
            );
}

