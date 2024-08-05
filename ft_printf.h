/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:08:55 by ocrobin           #+#    #+#             */
/*   Updated: 2024/08/04 13:09:39 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>

int			ft_printf(const char *str, ...);
int			ft_print_hex(unsigned long num, const char mode);
int			ft_percent(void);
int			ft_put_ptrhex(unsigned long ptr);
void		ft_putnbr_fd(int n, int fd);
int			ft_putstr(char *str);
int			ft_put_unsdec(unsigned int n);
int			ft_putchar(char c);
int			ft_printstr(char *str);
void		ft_putchar_fd(char c, int fd);
int			ft_print_d(int n);

#endif
