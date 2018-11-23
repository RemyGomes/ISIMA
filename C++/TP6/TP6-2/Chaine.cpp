#include "Chaine.hpp"
#include <cstring>
#include <sstream>
#include <stdexcept>

Chaine::Chaine(): capacite(-1), tab(nullptr)
{}

Chaine::Chaine(int capa):
    capacite(capa>0 ? capa : 0){
    if(capacite)
    {
        try {
            tab = new char [capacite+1];
            tab[0] = 0;
        } catch (std::bad_alloc &e) {
            std::cerr << e.what();
        }
    }
    else
    {
        tab = nullptr;
        capacite = -1;
    }
}

Chaine::Chaine(const char *cstr)
{
    if (cstr){
        capacite = strlen(cstr);
        try {
            tab = new char [capacite+1];
            strcpy(tab,cstr);
        } catch (std::bad_alloc &e) {
            std::cerr << e.what();
        }
    }
    else{
        capacite = -1;
        tab = nullptr;
    }
}

Chaine::Chaine(const Chaine  &chaine)
{
    capacite = chaine.capacite;
    if(capacite)
    {
        try {
            tab = new char [capacite];
            strcpy(tab,chaine.tab);
        } catch (std::bad_alloc &e) {
            std::cerr << e.what();
        }

    }
    else{
        tab = nullptr;
    }
}

// Destructeur
Chaine::~Chaine()
{
    if(tab)
    {
        delete [] tab;
    }
    
}




// Getters
int Chaine::getCapacite() const
{
    return capacite;
}

char * Chaine::c_str() const
{
    return tab;
}


// Affichage
void Chaine::afficher() const
{

}

void Chaine::afficher(std::ostream & o) const
{
    o << tab;
}


// Operateurs
Chaine& Chaine::operator=(const Chaine &uC){
    if(&uC != this)
    {
        delete [] tab;
        capacite = uC.capacite;
        if(capacite)
        {
            try {
                tab = new char [capacite+1];
                strcpy(tab,uC.tab);
            } catch (std::bad_alloc &e) {
                std::cerr << e.what();
            }

        }
        else
        {
            tab = nullptr;
        }
    }
    return *this;
}

char Chaine::operator[](int index) const{
    if(index < 0){
        throw std::out_of_range("index out of range");
        }
    else if (index > capacite){
        throw std::bad_alloc();
    }
    else {
        return tab[index];
    }
}

std::ostream& operator<<(std::ostream &o, const Chaine &c)
{
    c.afficher(o);
    return o;
}