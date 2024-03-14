#include "phonebook.hpp"

void    Phonebook::add_contact(Phonebook phon, int i)
{
    int     indx;
    std::string  str;
    std::string  name;

    phon.set_index(i);
    indx = phon.get_index() - 1;
    while (name == "")
    {
        ft_eof();
        std::cout << "Enter firest name : ";
        std::getline(std::cin, name);
        pers[indx].set_f_name(name);
    }
    while(1)
    {
        ft_eof();
        std::cout << "Enter last " << name << " name : ";
        std::getline(std::cin, str);
        pers[indx].set_l_name(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        ft_eof();
        std::cout << "Enter " << name << " nickname : ";
        std::getline(std::cin, str);
        pers[indx].set_nick_name(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        ft_eof();
        std::cout << "Enter " << name << " phone number: ";
        std::getline(std::cin, str);
        pers[indx].set_nb_phone(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    while(1)
    {
        ft_eof();
        std::cout << "Enter " << name << " darkest secret: ";
        std::getline(std::cin, str);
        pers[indx].set_d_secret(str);
        if (str != "")
        {
            str = "";
            break;
        }
    }
    std::cout << "\x1B[32m" << "Adding successfully" << "\x1B[0m" << std::endl;
}

void    ranking_column(std::string str)
{
    int x;

    x = 10 - str.length();
    if (str.length() <= 10)
    {
        while(x--)
            std::cout << " ";
        std::cout << str << "|";
    }
    else
        std::cout << str.substr(0, 9) << ".|";
}

void    Phonebook::print_contact(Phonebook phon)
{
    int i;

    i = -1;
    std::cout << " -------------------------------------------" << std::endl;
    std::cout << "|   index  |  f_name  |  l_name  | nickname |" << std::endl;
    std::cout << " -------------------------------------------" << std::endl;
    while (++i < 8)
    {
        if (phon.pers[i].get_f_name() == "" && i == 0)
        {
            std::cout << " -------------------------------------------" << std::endl;
            std::cout << "Phonebook is empty" << std::endl;
            break;
        }
        else if (phon.pers[i].get_f_name() == "")
            break;
        std::cout << "|    " << (i + 1) << "     |";
        ranking_column(phon.pers[i].get_f_name());
        ranking_column(phon.pers[i].get_l_name());
        ranking_column(phon.pers[i].get_nick_name());
        std::cout << std::endl;
        std::cout << " -------------------------------------------" << std::endl;
    }
}

int check_index(std::string str)
{
    if (str[1] == '\0' && (str[0] >= '0' && str[0] <= '9'))
        return(true);
    return(false);
}

void    Phonebook::search_contact(Phonebook phon)
{
    std::string  j;
    int     i;

    print_contact(phon);
    if (phon.pers[0].get_f_name() == "")
        return ;
    while (1)
    {
        ft_eof();
        std::cout << "Enter index : ";
        std::getline(std::cin, j) ;
        if (check_index(j) == false)
            continue ;
        i = -1;
        while(++i < 8)
        {
            if ((phon.pers[i].get_f_name() != "")  && (i + 1) == (j[0] - '0'))
            {
                std::cout << "\x1B[33m" << "\ncontact information ...." << "\x1B[0m" << std::endl;
                std::cout << "First Name: " << phon.pers[i].get_f_name() << std::endl;
                std::cout << "Last Name: " << phon.pers[i].get_l_name() << std::endl;
                std::cout << "Nickname: " << phon.pers[i].get_nick_name() << std::endl;
                std::cout << "Phone Number: " << phon.pers[i].get_nb_phone() << std::endl;
                std::cout << "Darkest Secret: " << phon.pers[i].get_d_secret() << std::endl;
                std::cout << "\x1B[33m" << "===========" << "\x1B[0m" << std::endl;
                return ;
            }
        }
    }
}
