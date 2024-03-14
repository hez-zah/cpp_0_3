#include "phonebook.hpp"

void    start_PhoneBook()
{
    std::cout << "|******************************************************|\n|" << std::setw(55) << "|" << std::endl;
    std::cout << "|                  Welocome to phonenook               |\n|" << std::setw(55) << "|" << std::endl;
    std::cout << "|**********************   MENU   **********************|" << std::endl;
    std::cout << "|for save a new contact write --> ADD                  |" << std::endl;
    std::cout << "|for display a specific contact write --> SEARCH       |" << std::endl;
    std::cout << "|for exit write --> EXIT                               |" << std::endl;
    std::cout << "|******************************************************|\n" << std::endl;
}

int main()
{
    int         i;
    std::string str;
    Phonebook   phon;

    start_PhoneBook();
    i = -1;
    while (1)
    {
        ft_eof();
        std::cout << "make your choice > ";
        std::getline(std::cin , str);
        if (str == "EXIT")
        {
            std::cout << "\x1B[36m" << "Exit PhoneBook" << std::endl;
            break;
        }
        else if (str == "ADD")
            phon.add_contact(phon, ++i);
        else if (str == "SEARCH")
            phon.search_contact(phon);
    }
}
