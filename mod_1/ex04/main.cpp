/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jknotts@student.21-school>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:41 by jknotts           #+#    #+#             */
/*   Updated: 2022/10/02 11:46:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong arguments number" << std::endl;
        return 1;
    }
    std::string file(argv[1]);
    std::ifstream ifs(file);
    if(ifs.fail())
    {
        std::cerr << "Error when try open " << file << std::endl;
        return 1;
    }
    std::ofstream ofs(file + ".replace");
    std::string oldStr(argv[2]);
    std::string newStr(argv[3]);
    std::string line;
    size_t index;

    while(getline(ifs, line))
    {
        while((index = line.find(oldStr)) != std::string::npos)
        {
            ofs << line.substr(0, index);
            ofs << newStr;
            line.erase(0, index + oldStr.length());
        }
        ofs << line << "\n";
    }
    ifs.close();
    ofs.close();
    std::cout << "Replace successful!" << std::endl;
    return 0;
}