#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

class   Contact
{
    private :
        std::string  f_name;
        std::string  l_name;
        std::string  nb_phone;
        std::string  nick_name;
        std::string  d_secret;
    public :
        //get
        std::string  get_f_name();
        std::string  get_l_name();
        std::string  get_nb_phone();
        std::string  get_nick_name();
        std::string  get_d_secret();
        //set
        void    set_f_name(std::string f_name);
        void    set_l_name(std::string f_name);
        void    set_nb_phone(std::string nb_phone);
        void    set_nick_name(std::string nick_name);
        void    set_d_secret(std::string d_secret);
};

class   Phonebook
{
    private :
        Contact pers[8];
        int     index;
    public :
        int     get_index();
        void    set_index(int);
        void    add_contact(Phonebook phon, int i);
        void    print_contact(Phonebook phon);
        void    search_contact(Phonebook phon);
};

void    start_PhoneBook();
void    ft_eof();

#endif
