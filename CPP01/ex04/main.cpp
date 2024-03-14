#include <iostream>
#include <fstream>
#include <string>

void ft_print_error(int i)
{
    if (i == 0)
        std::cout << "Error argument" << std::endl;
    else if (i == 1)
        std::cout << "Error open file" << std::endl;
}

int ft_replace(std::string line, char **av)
{
    std::ofstream    output_file;
    int         i;
    int         index;

    output_file.open(std::string(av[1]).append(".replace"), std::ios::out);
    if (output_file.fail())
        return (ft_print_error(1), 1);
    if (output_file.is_open())
    {
        i = -1;
        while (++i < (int)line.size())
        {
            index = line.find(av[2], i);
            if (i != index)
                output_file << line[i];
            else
            {
                output_file << av[3];
                i += std::string(av[2]).size() - 1;
            }
        }
        output_file.close();
    }
    return (0);
}

int main(int ac, char **av)
{
    std::ifstream    input_file;
    std::string      line;
    char        c;

    if (ac < 4)
        return (ft_print_error(0), 1);
    input_file.open(av[1], std::ios::in);
    if (input_file.fail())
        return (ft_print_error(1), 1);
    if (input_file.is_open())
    {
        while (input_file.get(c))
            line += c;
        input_file.close();
    }
    return (ft_replace(line, av));
}
