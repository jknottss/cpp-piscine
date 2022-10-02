/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jknotts <jknotts@student.21-school>       +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:43:52 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/02 11:31:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void meg(int argc, char **argv)
{
    while(--argc)
    {
        argv++;
        for(size_t i = 0; i < strlen(*argv); i++)
            (*argv)[i] = std::toupper((*argv)[i]);
        std::cout << *argv << " ";
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    } else
        meg(argc, argv);
    std::cout << std::endl;
    return (0);
}
