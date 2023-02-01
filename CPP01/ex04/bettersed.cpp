/* ************************************************************************************************ */
/*                                                                                                  */
/*                                                        :::   ::::::::   ::::::::  :::::::::::    */
/*   bettersed.cpp                                     :+:+:  :+:    :+: :+:    :+: :+:     :+:     */
/*                                                      +:+         +:+        +:+        +:+       */
/*   By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+         */
/*                                                    +#+         +#+        +#+      +#+           */
/*   Created: 2023/01/12 15:26:23 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#             */
/*   Updated: 2023/01/12 15:26:23 by ahjadani     ####### ########   ########      ###.ma           */
/*                                                                                                  */
/* ************************************************************************************************ */

# include "bettersed.h"

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    unsigned long pos = 0;
    while((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    return (line);
}

void    bettersed(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   ifs(filename);
    std::ofstream   ofs(filename + ".replace");
    std::string     line;

    if (!ifs.is_open())
    {
        std::cout << "Error: File not found" << std::endl;
        return ;
    }
    while (std::getline(ifs, line))
        ofs << ft_replace(line, s1, s2) << std::endl;
    
    ifs.close();
    ofs.close();
}