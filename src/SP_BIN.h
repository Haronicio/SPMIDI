#pragma once

#include <iostream>

class octet
{
private:
    char value = 0;
    bool override = false;
public:
    //constructeur par défaut
    octet();
    //constructeur pour un caractère lue
    octet(char);
    //coonstructeur pour un entier lue
    octet(int);
    ~octet();

    //méthode pour récupérer les hexadéceaux;
    char get_hexs();
    //méthode pour récupérer l'hexadecimal gauche
    char get_hexl();
    //méthode pour récupérer l'hexadecimal droit
    char get_hexr();
    //surcharge d'opérateur pour flux
    friend std::ostream& operator<<(std::ostream& os, const octet& o);
    //surcharge d'opérateur pour flux
    friend void operator>>(std::ostream& os, octet& o);
};

octet::octet()
{
    value = 0;
}
octet::octet(char c)
{
    value = c;
}
octet::octet(int i)
{
    value = (char)i;
}
char octet::get_hexl()
{
    return value & 0x00f0;
}
char octet::get_hexr()
{
    return value & 0x000f;
}
std::ostream& operator<<(std::ostream& os, const octet& o)
{
    os << std::hex << (int)o.value;
    return os;
}
void operator>>(std::ostream& os, octet& o)
{
    o.value = os.hex;
}

char octet::get_hexs()
{
    return value;
}
octet::~octet()
{
}

octet* read_hex(std::istream& stream);
std::ostream& read_word(std::ostream& stream);