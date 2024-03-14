#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
        return (0);
    }
    i = 0;
    while (++i < ac)
    {
        std::string str = av[i];
        j = -1;
        while(str[++j])
            std::cout << (unsigned char)std::toupper(str[j]);
    }
    std::cout << std::endl;
}
