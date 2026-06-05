/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:20:40 by tochaves          #+#    #+#             */
/*   Updated: 2026/06/05 16:32:15 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	specifier_format(char specifier, va_list *args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(*args, int));
	else if (specifier == 's')
		count += print_string(va_arg(*args, char *));
	else if (specifier == 'p')
		count += print_pointer(va_arg(*args, void *));
	else if (specifier == 'd')
		count += print_number(va_arg(*args, int));
	else if (specifier == 'i')
		count += print_number(va_arg(*args, int));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(*args, unsigned int));
	else if (specifier == 'x')
		count += print_hex(va_arg(*args, unsigned int), 0);
	else if (specifier == 'X')
		count += print_hex(va_arg(*args, unsigned int), 1);
	else if (specifier == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			i++;
			count += specifier_format(format[i], &args);
		}
		else
		{
			count += write(2, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
/* #include <stdio.h>
int	main(void)
{
	ft_printf("%c\n", 'A');
	ft_printf("%s\n", "hello");
	ft_printf("%p\n", "people");
	ft_printf("%d\n", -42);
	ft_printf("%i\n", 42);
	ft_printf("%u\n", 4294967295);
	ft_printf("%x\n", 255);
	ft_printf("%X\n", 255);
	ft_printf("%%\n");
} */