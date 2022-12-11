/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:36:30 by iremoztimur       #+#    #+#             */
/*   Updated: 2022/11/13 19:12:15 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd('-2147483648', fd);
    }
    else
    {
        if (n < 0)
        {
            ft_putchar_fd('-', fd);
            n *= 1;
        }
        if (n > 9)
        {
            ft_putchar_fd(n / 10, fd);
            n %= 10;
        }
        if (n < 10)
        {
            ft_putchar_fd(n + 48, fd);
        }
    }

}

int main()
{


    char    *arr;
    int n = 325;

    arr = malloc(sizeof(char) * 3);
    int fd = open("irem.txt", O_RDWR | O_CREAT, 777);
    ft_putnbr_fd(n, fd);
    close(fd);

    fd = open("irem.txt", O_RDONLY, 777);
    read(fd, arr, 3);

    printf("%s", arr);


}
